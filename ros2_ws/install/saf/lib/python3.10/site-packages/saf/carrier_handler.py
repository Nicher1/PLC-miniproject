import rclpy
import numpy as np
from rclpy.node import Node
from saf_msgs.msg import Carrier

class CarrierHandler(Node):

    def __init__(self): 

        super().__init__('carrier_handler')
        self.subscription = self.create_subscription(
            Carrier,
            'carrier_info',
            self.carrier_info_callback,10
        )
        self.subscription
        

    def carrier_info_callback(self,msg):
        print_string = f"\nRecieved Carrier Info:\n   Carrier ID: {msg.carry_id}\n   Station ID: {msg.station_id}\n   Timestamp {msg.hour}:{msg.minute}:{msg.second}"
        self.get_logger().info(print_string)

def main(args=None):
    rclpy.init(args=args)

    carrier_handler = CarrierHandler()
    rclpy.spin(carrier_handler)


    #Destroy node when finished
    carrier_handler.destroy_node()
    rclpy.shutdown

if __name__ == '__main__':
    main()