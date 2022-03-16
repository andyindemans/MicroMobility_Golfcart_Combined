import bluetooth, subprocess, csv
name = "Altus_NR3-3062880"      # Device name
addr = "6C:C3:74:EF:6C:7B"      # Device Address
port = 1                        # RFCOMM port

class Node:
    def __init__(self, coordinate, label):
        self.neighbours = []
        self.coordinate = coordinate
        self.label = label
        
    def add_neighbour(self, neighbour):
        self.neighbours.append(neighbour)

    def print_neighbours(self):
        print("-----------")
        print(f"Neighbours of node {self.label}")
        for neighbour in self.neighbours:
            print(f"    -> {neighbour.label}")
        print("-----------")

    def __str__(self):
        return f"Latitude: {self.coordinate.latitude} \t Longtitude: {self.coordinate.longtitude} Label: {self.label}"

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
		
    def __str__(self):
        return f"Latitude: {self.latitude} \t Longtitude: {self.longtitude}"

try:
    nodeid = 0
    socket = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
    socket.connect((addr,port))
    with open('capture.csv', 'w', newline='') as csvfile:
        csvwriter = csv.writer(csvfile, delimiter=' ', quotechar='|', quoting=csv.QUOTE_MINIMAL)
        predecessor = Node(Coordinate("69420", "69420"), 'None')
        successor = Node(Coordinate("69420", "69420"), 'None')
        previousnode = None
        while(True):

                msg = socket.recv(128)
                gga = msg.decode('UTF8').replace('\r', '')
                gga = gga.split(",")
                
                if len(gga)>5:

                    coordinate = Coordinate(gga[2], gga[4]) 
                    node = Node(coordinate, nodeid)
                    if previousnode != None:
                        previousnode.add_neighbour(node)
                        previousnode.print_neighbours()

                    previousnode = node

                    nodeid += 1 
                    node.add_neighbour(predecessor)
                    
                    print(node)
                    node.print_neighbours()

                    predecessor = node
                    csvwriter.writerow([coordinate.latitude,",",  coordinate.longtitude])
                    
                    
                           
except bluetooth.btcommon.BluetoothError as err:
    # Error handler
    print(err)
    pass


