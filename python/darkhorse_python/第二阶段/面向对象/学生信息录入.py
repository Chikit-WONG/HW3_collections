#coding:gbk
class Student:
    def __init__(self,name,age,address,i):
        self.m_name=name
        self.m_age=age
        self.m_address=address
        self.m_count=i
        print(f'ѧ��{self.m_count}��Ϣ¼�������ɣ���ѧ��������{self.m_name},���䣺{self.m_age}����ַ��{self.m_address}��')
        
    m_name=None
    m_age=None
    m_address=None
    m_count=None
n=int(input('������Ҫ¼���ѧ��������'))
for i in range(1,n+1):
    print(f"��ǰ¼���{i}λѧ����Ϣ���ܹ���¼��{n}Ϊѧ����Ϣ")
    print(f'������ѧ��������')
    name=input()
    print(f'������ѧ�����䣺')
    age=int(input())
    print('������ѧ����ַ��')
    address=input()
    student=Student(name,age,address,i)
    
    