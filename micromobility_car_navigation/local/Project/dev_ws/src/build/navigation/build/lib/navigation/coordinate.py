class Coordinate:
    def __init__(self, id, latitude, longitude):
        self.id = id
        self.latitude = latitude
        self.longitude = longitude

    def __str__(self):
     return f"({self.latitude}, {self.longitude})"
        