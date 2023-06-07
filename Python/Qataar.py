class Train:
    
    def __init__(self, last_visited_city, weight_capacity, is_on_trip):
        self.last_visited_city = last_visited_city
        self.weight_capacity = weight_capacity
        self.is_on_trip = is_on_trip


class Trip:

    all_cities = ('Arak', 'Ardabil', 'Urmia', 'Isfahan', 'Ahvaz', 'Ilam', 'Bojnord', 'Bandar Abbas', 'Bushehr', 'Birjand', 'Tabriz', 'Tehran', 'Khorramabad', 'Rasht', 'Zahedan', 'Zanjan', 'Sari', 'Semnan', 'Sanandaj', 'Shahr-e Kord', 'Shiraz', 'Qazvin', 'Qom', 'Karaj', 'Kermanshah', 'Gorgan', 'Mashhad', 'Hamadan', 'Yasuj', 'Yazd')

    def __init__(self, origin_city, destination_city, train):
        self.train = self.train_validation(train)
        self.destination_city = destination_city
        self.origin_city = self.origin_city_validation(origin_city)
        self.passengers = []
    
    def origin_city_validation(self, origin_city):
        if(origin_city not in list(self.all_cities)):
            raise Exception("This input is not a verified city!")
        elif(origin_city == self.destination_city):
            raise Exception("Origin and destination cities can't be the same!")
        elif(origin_city != self.train.last_visited_city):
            raise Exception("The train of the trip is not available in the origin city!")
        else : return origin_city
        
    def train_validation(self, train):
        if(not isinstance(train,Train)):
            raise Exception("This input is not a train!")
        elif(train.is_on_trip == True):
            raise Exception("This train is not available!")
        else: return train

    # here implement the magic method
    def __call__(self):
        remaining_weight = self.train.weight_capacity
        for i in range(len(self.passengers)):
            remaining_weight -= self.passengers[i].load_weight
        return remaining_weight


class Passenger:

    def __init__(self, fullname, load_weight):
        self.fullname = fullname
        self.load_weight = load_weight

    def attend_trip(self, trip):
        if(self.load_weight <= trip()):
            trip.passengers.append(self)
        else: raise Exception("Heavy load!")

    def cancel_trip(self, trip):
        if(self not in list(trip.passengers)):
            raise Exception("This passenger is not attended to this trip!")
        else : trip.passengers.remove(self)

    # here implement the magic method
    def __repr__(self):
        return self.fullname