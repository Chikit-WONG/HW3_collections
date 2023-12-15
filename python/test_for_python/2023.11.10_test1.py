# class Student:
#     def __init__(self,age):
#         self.age=age
        
#     def __le__(self,other):
#         return self.age<=other.age
    
# stu1=Student(19)
# stu2=Student(17)
# print(stu1>=stu2)
        
        
class Father:
    def test(self):
        pass

class Son1:
    def test(self):
        print('Here is Son1.')

class Son2:
    def test(self):
        print('Here is Son2.')
        
def doWork(father):
    father.test()
    
son2: Son2=Son2()

doWork(son2)