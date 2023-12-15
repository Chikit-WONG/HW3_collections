#coding:gbk
class Phone:
    def __init__(self):
        try:
            judge=input('你手机是不是5g手机。是请输入True;不是请输入False:')
        except Exception as e:
            print(f'出故障了，故障是：{e}')
        else:
            self.__is_5g_enable=judge.lower()=='true'
            print(self.__is_5g_enable)
        
    def __check_5g(self):
        if self.__is_5g_enable:
            print('5g开启')
        else:
            print('5g关闭,使用4网络')
        print('正在通话')
    
    def call_by_5g(self):
        self.__check_5g()
        
    __is_5g_enable=None
    
phone=Phone()
phone.call_by_5g()


        