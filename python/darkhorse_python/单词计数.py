#coding:GBK

# f=open("C:\word.txt",'r',encoding='utf-8')
# contect=f.read()
# count1=contect.count("itheima")
# print(count1)
# f.close()

# f=open("C:\word.txt",'r',encoding='utf-8')
# count=0
# for line in f:
#     line=line.strip()
#     words=line.split(" ")
#     for word in words:
#         if word=='itheima':
#             count+=1
# print(f"itheima出现的次数是:{count}")
# f.close()

f=open("C:\word.txt",'r',encoding='utf-8')
count=0
for line in f:
    line=line.strip()
    words=line.split(" ")
    for word in words:
        if word=='itheima':
            count+=1
print(f"itheima出现了{count}次")