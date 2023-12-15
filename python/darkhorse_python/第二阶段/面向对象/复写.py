class Father1:
    def call(self):
        print('Here is father1')
        print(self.name)
    
    def func(self):
        self.call()
        print(self.name)
    
    name='father1'
    
        
class Father2:
    def call(self):
        print('Here is father2')
        print(self.name)
    
    def func(self):
        self.call()
        print(self.name)
        
    name='father2'
        
class Father3:
    def call(self):
        print('Here is father3')
    
    def func(self):
        self.call()
        
class Son(Father1,Father2,Father3):
    def func(self):
        # super().call()
        Father1.call(self)
        
    def call(self):
        print('here is Son')
        print(self.name)
        
    name='son'
        
son:Son=Son()
son.func()