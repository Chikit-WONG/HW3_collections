class Car:
    def __init__(self,make,model,year):
        self.make=make
        self.model=model
        self.year=year
        self.mileage=0
    def describe(self):
        print(f"This is a {self.make} {self.model} {self.year} with {self.mileage} miles.")
        
    # def describe2(self):
    #     return f"This is a {self.make} {self.model} {self.year} with {self.mileage} miles."
    
    def drive(self,miles):
        self.mileage+=miles
        
class Garage:
    cars=[]
    def add(self,car):
        self.cars.append(car)
        
    def remove(self,car):
        self.cars.remove(car)
        
    def info(self):
        for car in self.cars:
            car.describe()
        


my_car=Car("Toyota","Corolla",2020)
my_car.drive(100)
my_car.describe()

your_car=Car("Honda","Civic",2021)
your_car.describe()

my_garge=Garage()
my_garge.add(my_car)
my_garge.info()
my_garge.add(your_car)
my_garge.info()
my_garge.remove(your_car)

 

