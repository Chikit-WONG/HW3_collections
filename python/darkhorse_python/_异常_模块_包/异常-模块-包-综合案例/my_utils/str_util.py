#coding:gbk
def str_reverse(s):
    """���ַ�����ת

    Args:
        s (_string_): _Ҫ��ת���ַ���_
    """
    print(s[::-1])

def substr(s,x,y):
    """���ַ�����Ƭ

    Args:
        s (_string_): _Ҫ��Ƭ���ַ���_
        x (_int_): _Ҫ��Ƭ����ʼλ��_
        y (_int_): _Ҫ��Ƭ����ֹλ��_
    """
    print(s[x:y:1])
    
if __name__=='__main__':
    str_reverse('�������Ա')
    substr('�������Ա',0,3)
    
    
