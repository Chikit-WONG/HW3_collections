#coding:gbk
class AC:
    def cool_wind(self):
        pass
    
    def hot_wind(self):
        pass
    
    def swing_l_r(self):
        pass
    
class Midea_ac(AC):
    def cool_wind(self):
        print('���ĺ�������Ƽ�')
    
    def hot_wind(self):
        print('���Ŀյ�����˿����')
        
    def swing_l_r(self):
        print('���Ŀյ��޷������ҡ��')
        
def work(ac:AC):
    ac.cool_wind()
    ac.hot_wind()
    ac.swing_l_r()
    
midea_ac:Midea_ac=Midea_ac()
work(midea_ac)