#coding:gbk
f=None
try:
    f = open("C\123.txt", "r", encoding="UTF-8")
except Exception as e:
    print("�����쳣��")
    try:
        f = open("C\123.txt", "w", encoding="UTF-8")
    except Exception as e2:
        print(f"�������쳣���쳣�ǣ�{e2}")
    
    f.write('HAHA')
else:
    print("�ø��ˣ�û���쳣��")
finally:
    print("����finally,��û���쳣�Ҷ�Ҫִ��")
    print(type(f))
    f.close()