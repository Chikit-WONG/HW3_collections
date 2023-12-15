a=[1,2,3,4,5,6,7,8,9,10]
b=[]
c=[]
index=0
while index<len(a):
    if a[index]%2==0:
        b.append(a[index])
    index+=1
        
print(f'Using while loop,extract even numbers from the list:{a} to the new list:{b}')
print()
for i in a:
    if i%2==0:
        c.append(i)
print(f'Using for loop,extract even numbers from the list:{a} to the new list:{c}')
        