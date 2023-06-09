import rclpy
import numpy as np
from rclpy.node import Node
from saf_msgs.msg import Carrier

class CarrierHandler(Node):

    def __init__(self): 
        """
        Initializes carrier handler node. subscribes to carrier_info topic
        """
        #Initialize node
        super().__init__('carrier_handler')
        # define subscription
        self.subscription = self.create_subscription(
            Carrier, # msg type
            'carrier_info', # topic name
            self.carrier_info_callback,10 # callback function (whenever topic is updated)
        )
        self.subscription # prevent unused variable warning
        

    def carrier_info_callback(self,msg): # callback function
        print_string = f"\nRecieved Carrier Info:\n   Carrier ID: {msg.carry_id}\n   Station ID: {msg.station_id}\n   Timestamp {msg.hour}:{msg.minute}:{msg.second}"
        self.get_logger().info(print_string) # log information

def main(args=None):
    rclpy.init(args=args)
    # define carrier handler and spin
    carrier_handler = CarrierHandler()
    rclpy.spin(carrier_handler) # essentially keeps the subscriber running


    #Destroy node when finished
    carrier_handler.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
