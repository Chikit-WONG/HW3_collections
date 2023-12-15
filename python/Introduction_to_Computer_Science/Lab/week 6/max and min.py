list=[0,2,50,45,65,9,8,78]

list2=list[1:]

max=list[0]
min=list[0]

for i in list2:
    if i>max:
        max=i
    if i<min:
        min=i
print(max)
print(min)

for i in list2:
    if i<min:
        min=i
print(min)