#coding:gbk
class Student:
    def __init__(self,name,age):
        self.m_name=name
        self.m_age=age
    def __str__(self):
        return f'���ѧ���������ǣ�{self.m_name},�����ǣ�{self.m_age}��'
    
    def __gt__(self,other):
        return self.m_age>other.m_age
    m_name=None
    m_age=None
    
    def __le__(self,other):
        return self.m_age<other.m_age
    
stu1=Student('����',24)
print(stu1)
print(type(str(stu1)))
stu2=Student('����',24)
print(stu1>stu2)
print(stu1<=stu2)

    
    