#coding:gbk
def print_file_info(file_name):
    """
    ��ӡ�ļ�ȫ������

    Args:
        file_name (_iofile_): _��Ҫ���������ļ���·��_
    """
    f=None
    try:
        f=open(file_name,'r',encoding='gbk')
        print(f.read())
    except Exception as e:
        print(f"�����쳣���쳣�ǣ�{e}")
    finally:
        if(f!=None):
            f.close()

def append_to_file(file_name,data):
    """
    ������׷��д�뵽�ļ���

    Args:
        file_name (_type_): _�ļ�·��_
        data (_string_): _Ҫ׷�ӵ�����_
    """
    f=open(file_name,'a',encoding='gbk')
    f.write(data)
    f.write('\n')
    f.close()
        
if __name__=='__main__':
    print_file_info('C:\word.txt')
    append_to_file('C:\word.txt','�������Ա')