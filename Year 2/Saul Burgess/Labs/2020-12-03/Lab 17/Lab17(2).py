# Main class
class Gym:
    'A class for holding gym information'

    def __init__(self, location, open_year):
        self.location = location
        self.open_year = open_year

#First layer sub-class
class Equipment(Gym):
    'Subclass for equipment'
    def __init__(self, location, open_year, equipment_type):
        self.equipment_type = equipment_type
        Gym.__init__(self, location, open_year)

#First layer sub-class
class Gym_member(Gym):
    'Subclass for gym members'
    def __init__(self, location, open_year, member_type):
        self.member_type = member_type
        Gym.__init__(self, location, open_year)

#Third layer sub-sub-class
class Exercise_Bike(Equipment):
    'Subclass to describe excercise bikes'
    def __init__(self, location, open_year, equipment_type, model):
        self.model = model
        Equipment.__init__(self, location, open_year, equipment_type)

#Third layer sub-sub-class
class Runner(Gym_member):
    'Subclass to describe Runners'
    def __init__(self, location, open_year, member_type, age):
        self.age = age
        Gym_member.__init__(self, location, open_year, member_type)


#Initialising objects
Runner = Runner('Carlow', '2001', 'Runner', '27')
Bike = Exercise_Bike('Carlow', '2001', 'Bike', 'BodyTrain MAX S-360')

#Printing objects
print("The gym is located in", Bike.location, "the gym was founded in", Runner.open_year, "the gym contains a",
Bike.equipment_type, "which is a model:", Bike.model, "The bike is ridden by a", Runner.member_type, "who is", 
Runner.age, "years old.")