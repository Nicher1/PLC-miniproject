import rclpy
import numpy as np
import socket
import xml.sax
import csv
from rclpy.node import Node
from std_msgs.msg import Int64
from saf_msgs.msg import Carrier


class PLCInformation(xml.sax.ContentHandler):

    def __init__(self):
        self.currentTag = ""
        self.carrierID = ""
        self.stationID = 0
        self.time = "" #Only used to deconstruct the time into seconds, minutes and hours
        self.hours = 0
        self.minutes = 0
        self.seconds = 0
        self.stopParsing = False

    def startElement(self, tag, attributes):
        self.currentTag = tag

    def endElement(self, tag):
        self.currentTag = tag
        if tag == "/processingInformation":
            print("About to stop parsing")
            self.stopParsing = True

    def characters(self, content):
        if self.stopParsing:
            return
        elif self.currentTag == "carrierID":
            self.carrierID = content
            self.carrierID = int(self.carrierID)
        elif self.currentTag == "time":
            self.time = content.split("-")
            self.time = self.time[3]
            self.time = self.time.split(":")
            self.hours = int(self.time[0])
            self.minutes = int(self.time[1])
            self.seconds = int(self.time[2])
        elif self.currentTag == "stationID":
            self.stationID = int(content)

class TCP_server(Node):

    def __init__(self):

        with open(r'/home/hh4000/SAF_miniproject_files/procssing_times_table.csv') as csvfile:
            # create a CSV reader object
            csvreader = csv.reader(csvfile, delimiter=';')
            # read the header row
            header = next(csvreader)
            # create an empty list to store the data
            data = []
            # iterate over each row in the CSV file
            for row in csvreader:
                # convert each value starting from the second column to a float and append it to the data list
                data.append([float(x) for x in row[1:]])
            # convert the data list to a numpy array
            self.processingTimes = np.array(data)

        self.ipaddress = input("Input IP adress: ")    
        self.port = 20000
        super().__init__('tcp_client')
        self.publisher_ = self.create_publisher(
            Carrier, 
            'carrier_info', 10
        )
        
        self.s = socket.socket(family=socket.AF_INET, type=socket.SOCK_STREAM)
        self.get_logger().info("Binding")
        self.s.bind((self.ipaddress, self.port))

    def run_tcp(self):
        while True:
            msg = Carrier()
            
            self.get_logger().info("Listening")
            self.s.listen()
            connection, clientAdress = self.s.accept()
            self.get_logger().info(f"Accepted \nWaiting for data")
            xml_data = bytes(0)

            while True:
                data = connection.recv(1024)
                if not data:
                    break
                self.get_logger().info(f"Recieved {data!r}")
                xml_data = data

                # create an XMLReader
            parser = xml.sax.make_parser()
            # turn off namespaces
            parser.setFeature(xml.sax.handler.feature_namespaces, 0)
            # override the default ContextHandler
            Handler = PLCInformation()
            parser.setContentHandler(Handler)

            try:
                parser.feed(xml_data)
            except xml.sax.SAXParseException as e:
                print("Error parsing XML data:", e)

            msg.station_id = (Handler.stationID)
            msg.carry_id = (Handler.carrierID)
            msg.hour = (Handler.hours)
            msg.minute = (Handler.minutes)
            msg.second = (Handler.seconds)

            self.publisher_.publish(msg)
            self.get_logger().info('Published carrier info')


            processingTime = self.processingTimes[int(Handler.carrierID)-1, Handler.stationID-1] #Find the correct processing time
            connection.send((int(processingTime)).to_bytes(2, byteorder="little")) #Send the processing time
            connection.close()
            self.get_logger().info(f"Sent processing time: {processingTime}")

            data = 0
            ## implement code that fills out msg.
            # tcp_str = ...
            # msg.carry_id = ...
            # msg.station_id = ...
            # etc.


def main(args=None):
    rclpy.init(args=args)

    tcp_server = TCP_server()
    try:
        tcp_server.run_tcp()
    except KeyboardInterrupt:
        pass

    tcp_server.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()