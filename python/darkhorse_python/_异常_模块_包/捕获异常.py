#coding:gbk
try:
    a=1/0
except Exception as e:
    print(f"�����쳣���쳣�ǣ�{e}")
else:
    print("û���쳣")
finally:
    print("haha")
    