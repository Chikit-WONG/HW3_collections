#coding:gbk
try:
    a=1/0
except Exception as e:
    print(f"出现异常，异常是：{e}")
else:
    print("没有异常")
finally:
    print("haha")
    