import bluetooth, subprocess, csv
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from mm_interfaces.msg import CoordinateMsg
from time import sleep

name = "Altus_NR3-3062880"  # Device name
addr = "6C:C3:74:EF:6C:7B"  # Device Address
port = 1  # RFCOMM port


class GPSPublisher(Node):
    def __init__(self):
        super().__init__('gps_publisher')
        self.publisher = self.create_publisher(CoordinateMsg, 'current_location', 10)


class Coordinate:

    def __init__(self, latitude, longitude):
        self.latitude = self.NMEA_lat_to_decimal(latitude)
        self.longitude = self.NMEA_long_to_decimal(longitude)

    def NMEA_lat_to_decimal(self, nmea_format):
        dd = nmea_format[:2]
        mm = nmea_format[2:]
        return int(dd) + float(mm) / 60

    def NMEA_long_to_decimal(self, nmea_format):
        dd = nmea_format[:3]
        mm = nmea_format[3:]
        return int(dd) + float(mm) / 60

    # def get_decimal_tuple():
    # return (self.latitude, self.longitude)

    def __str__(self):
        return f"Latitude: {self.latitude} \t Longitude: {self.longitude}"


def main(args=None):
    rclpy.init(args=args)
    gps_publisher = GPSPublisher()

    try:
        socket = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
        socket.connect((addr,port))

        while True:
            sleep(0.1)
            #gga = ['$GPGGA', '124257.60', '5057.1939338', 'N', '00521.208213', 'E', '2', '18', '0.8', '29.1245', 'M',
            #       '47.4541', 'M', '0.6', '0069*7D\n$GPVTG', '90.42', 'T', '92.90', 'M', '1.70', 'N', '3.15', 'K', 'D']
            msg = socket.recv(128)
            gga = msg.decode('UTF8').replace('\r', '')
            gga = gga.split(",")

            try:
                if len(gga) > 5:
                    coordinate = Coordinate(gga[2], gga[4])
                    coordinate_msg = CoordinateMsg()
                    coordinate_msg.latitude = coordinate.latitude
                    coordinate_msg.longitude = coordinate.longitude

                    heading = gga[17]
                    if heading != '':
                        heading = float(heading)
                    else:
                        heading = float(404.0)
                    coordinate_msg.heading = heading
                    gps_publisher.publisher.publish(coordinate_msg)
            except:
                print('no signal')

    except bluetooth.btcommon.BluetoothError as err:
        # Error handler
        gps_publisher.get_logger().info(str(err))
        pass


if __name__ == '__main__':
    main()
