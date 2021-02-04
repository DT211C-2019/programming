class Vehicle:
    'Class for holding information on vechicle type__(self, model_year, total_mileage, vin, engine, transmission)'

    def __init__(self, model_year, total_mileage, vin, engine, transmission):
        self.model_year = model_year
        self.total_mileage = total_mileage
        self.vin = vin
        self.engine = engine
        self.transmission = transmission


class Car(Vehicle):
    'Subclass for the type Car'
    def __init__(self, model_year, total_mileage, vin, engine, transmission, fuel_economy):
        self.fuel_economy = fuel_economy
        Vehicle.__init__(self, model_year, total_mileage, vin, engine, transmission)


class Truck(Vehicle):
    'Subclass for the type Truck'
    def __init__(self, model_year, total_mileage, vin, engine, transmission, towage_weight):
        self.towage_weight = towage_weight
        Vehicle.__init__(self, model_year, total_mileage, vin, engine, transmission)


class SUV(Vehicle):
    'Subclass for the type SUV'
    def __init__(self, model_year, total_mileage, vin, engine, transmission, ground_clearence):
        self.ground_clearence = ground_clearence
        Vehicle.__init__(self, model_year, total_mileage, vin, engine, transmission)


class Minivan(Vehicle):
    'Subclass for the type Minivan'
    def __init__(self, model_year, total_mileage, vin, engine, transmission, storage_volume):
        self.storage_volume = storage_volume
        Vehicle.__init__(self, model_year, total_mileage, vin, engine, transmission)


'Initialasing objects'
Motor1 = Car('2000', '449,313KM', '1FADP3F26EL113227', '2.0', 'Manual',  '5.5 litres/100km')
Motor2 = Truck('2009', '194,725KM', 'JTHFN48Y640099425', '3.0', 'Manual', '4 Tonnes')
Motor3 = SUV('1996', '168,000KM', '1FTHF25M3RNB03986', '3.1', 'Manual', '25cm')
Motor4 = Minivan('2005', '250,000KM', '1FAHP3F28CL422745', '3.0', 'Manual', '3,044M^3')


'Printing objects'
print(Motor1.model_year, Motor1.total_mileage, Motor1.vin, Motor1.engine, Motor1.transmission, Motor1.fuel_economy)
print(Motor2.model_year, Motor2.total_mileage, Motor2.vin, Motor2.engine, Motor2.transmission, Motor2.towage_weight)
print(Motor3.model_year, Motor3.total_mileage, Motor3.vin, Motor3.engine, Motor3.transmission, Motor3.ground_clearence)
print(Motor4.model_year, Motor4.total_mileage, Motor4.vin, Motor4.engine, Motor4.transmission, Motor4.storage_volume)