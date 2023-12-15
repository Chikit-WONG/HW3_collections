#coding:gbk
def str_reverse(s):
    """将字符串反转

    Args:
        s (_string_): _要反转的字符串_
    """
    print(s[::-1])

def substr(s,x,y):
    """将字符串切片

    Args:
        s (_string_): _要切片的字符串_
        x (_int_): _要切片的起始位置_
        y (_int_): _要切片的终止位置_
    """
    print(s[x:y:1])
    
if __name__=='__main__':
    str_reverse('黑马程序员')
    substr('黑马程序员',0,3)
    
    
