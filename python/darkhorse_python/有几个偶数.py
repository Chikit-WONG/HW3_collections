num=int(input('Please a number:'))
count=0
for i in range(1,num):
    if i%2==0:
        count+=1
print(f'From 1 to {num} there has {count} even number.')