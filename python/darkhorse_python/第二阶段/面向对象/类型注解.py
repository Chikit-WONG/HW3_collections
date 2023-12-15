#coding:gbk
#变量的类型注解
import random
a=random.randint(0,10)
a:bool=a
a=str(a) #type:float
print(a)
print(type(a))
b:dict=10

#函数（方法的类型注解）
def add(x:int,y:int)->int:
    """add two number

    Args:
        x (float): _first number_
        y (giaogiao): _description_

    Returns:
        haha: _description_
    """
    return x+y

add()

def func(data:list)->None:
    data.append


#Union类型
from typing import Union
my_dict:dict[str,Union[str,int]]={"张三":18,"李四":'nb'}

def func2(data:Union[str,int])->Union[float,list]:
    pass

func2()

