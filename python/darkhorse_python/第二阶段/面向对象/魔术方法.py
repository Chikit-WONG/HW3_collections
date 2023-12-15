#coding:gbk
class Student:
    def __init__(self,name,age):
        self.m_name=name
        self.m_age=age
    def __str__(self):
        return f'这个学生的姓名是：{self.m_name},年龄是：{self.m_age}。'
    
    def __gt__(self,other):
        return self.m_age>other.m_age
    m_name=None
    m_age=None
    
    def __le__(self,other):
        return self.m_age<other.m_age
    
stu1=Student('张三',24)
print(stu1)
print(type(str(stu1)))
stu2=Student('李四',24)
print(stu1>stu2)
print(stu1<=stu2)

    
    