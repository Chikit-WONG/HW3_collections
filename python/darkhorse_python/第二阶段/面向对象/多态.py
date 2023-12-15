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
        print('美的核心制冷科技')
    
    def hot_wind(self):
        print('美的空调电热丝加热')
        
    def swing_l_r(self):
        print('美的空调无风感左右摇风')
        
def work(ac:AC):
    ac.cool_wind()
    ac.hot_wind()
    ac.swing_l_r()
    
midea_ac:Midea_ac=Midea_ac()
work(midea_ac)