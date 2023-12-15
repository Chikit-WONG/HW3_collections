#coding:gbk
f=None
try:
    f = open("C\123.txt", "r", encoding="UTF-8")
except Exception as e:
    print("出现异常了")
    try:
        f = open("C\123.txt", "w", encoding="UTF-8")
    except Exception as e2:
        print(f"还是有异常，异常是：{e2}")
    
    f.write('HAHA')
else:
    print("好高兴，没有异常。")
finally:
    print("我是finally,有没有异常我都要执行")
    print(type(f))
    f.close()