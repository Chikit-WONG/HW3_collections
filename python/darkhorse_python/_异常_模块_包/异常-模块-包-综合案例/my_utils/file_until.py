#coding:gbk
def print_file_info(file_name):
    """
    打印文件全部内容

    Args:
        file_name (_iofile_): _将要被代开的文件的路径_
    """
    f=None
    try:
        f=open(file_name,'r',encoding='gbk')
        print(f.read())
    except Exception as e:
        print(f"出现异常，异常是：{e}")
    finally:
        if(f!=None):
            f.close()

def append_to_file(file_name,data):
    """
    将数据追加写入到文件中

    Args:
        file_name (_type_): _文件路径_
        data (_string_): _要追加的内容_
    """
    f=open(file_name,'a',encoding='gbk')
    f.write(data)
    f.write('\n')
    f.close()
        
if __name__=='__main__':
    print_file_info('C:\word.txt')
    append_to_file('C:\word.txt','黑马程序员')