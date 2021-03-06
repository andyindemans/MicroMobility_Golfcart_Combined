import bluetooth, subprocess, csv
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from mm_interfaces.msg import CoordinateMsg


name = "Altus_NR3-3062880"      # Device name
addr = "6C:C3:74:EF:6C:7B"      # Device Address
port = 1                        # RFCOMM port


class GPSPublisher(Node):
    def __init__(self):
        super().__init__('gps_publisher')
        self.publisher = self.create_publisher(CoordinateMsg, 'topic', 10)

        
class Coordinate:

    def __init__(self, latitude, longtitude):
        self.latitude = self.NMEA_lat_to_decimal(latitude)
        self.longtitude = self.NMEA_long_to_decimal(longtitude)

    def NMEA_lat_to_decimal(self, nmea_format):
        dd = nmea_format[:2]
        mm = nmea_format[2:]
        return int(dd) + float(mm)/60

    def NMEA_long_to_decimal(self, nmea_format):
        dd = nmea_format[:3]
        mm = nmea_format[3:]
        return int(dd) + float(mm)/60
    
    def get_decimal_tuple():
        return (self.latitude, self.longtitude)
		
    def __str__(self):
        return f"Latitude: {self.latitude} \t Longtitude: {self.longtitude}"
    

def main(args=None):
    rclpy.init(args=args)
    gps_publisher = GPSPublisher()
    
    try:
        socket = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
        socket.connect((addr,port))
        
        while(True):
            msg = socket.recv(128)
            gga = msg.decode('UTF8').replace('\r', '')
            gga = gga.split(",")
            
            if len(gga)!=1:
                coordinate = Coordinate(gga[2], gga[4]) 
                coordinate_msg = CoordinateMsg()
                coordinate_msg.latitude = coordinate.latitude
                coordinate_msg.longtitude = coordinate.longtitude  
                gps_publisher.publisher.publish(coordinate_msg)
                gps_publisher.get_logger().info(f'Publishing: {coordinate.latitude}, {coordinate.longtitude}') 

    except bluetooth.btcommon.BluetoothError as err:
        # Error handler
        print(err)
        pass

if __name__ == '__main__':
    main()


