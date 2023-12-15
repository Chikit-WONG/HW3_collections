#coding:gbk
class Student:
    def __init__(self,name,age,address,i):
        self.m_name=name
        self.m_age=age
        self.m_address=address
        self.m_count=i
        print(f'学生{self.m_count}信息录入完成完成：【学生姓名：{self.m_name},年龄：{self.m_age}，地址：{self.m_address}】')
        
    m_name=None
    m_age=None
    m_address=None
    m_count=None
n=int(input('请输入要录入的学生人数：'))
for i in range(1,n+1):
    print(f"当前录入第{i}位学生信息，总共需录入{n}为学生信息")
    print(f'请输入学生姓名：')
    name=input()
    print(f'请输入学生年龄：')
    age=int(input())
    print('请输入学生地址：')
    address=input()
    student=Student(name,age,address,i)
    
    