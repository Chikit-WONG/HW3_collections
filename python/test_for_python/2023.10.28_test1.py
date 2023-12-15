list=[1,5,7,8,9,6,3,2,1]
for i in range(0,len(list),1):
    for j in range(0,len(list)-i-1,1):
        if list[j]<list[j+1]:
            temp=list[j]
            list[j]=list[j+1]
            list[j+1]=temp
print(list)