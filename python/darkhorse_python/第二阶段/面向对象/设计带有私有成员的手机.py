#coding:gbk
class Phone:
    def __init__(self):
        try:
            judge=input('���ֻ��ǲ���5g�ֻ�����������True;����������False:')
        except Exception as e:
            print(f'�������ˣ������ǣ�{e}')
        else:
            self.__is_5g_enable=judge.lower()=='true'
            print(self.__is_5g_enable)
        
    def __check_5g(self):
        if self.__is_5g_enable:
            print('5g����')
        else:
            print('5g�ر�,ʹ��4����')
        print('����ͨ��')
    
    def call_by_5g(self):
        self.__check_5g()
        
    __is_5g_enable=None
    
phone=Phone()
phone.call_by_5g()


        