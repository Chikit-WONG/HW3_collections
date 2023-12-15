i=1
while i<=5:
    j=1
    while j<=i:
        print('*',end="")
        j+=1
    print()
    i+=1
while i>=1:
    j=1
    while j<=i:
        print('*',end=(''))
        j+=1
    print()
    i-=1
    
print()

i=1
while i<=9:
    j=1
    while j<=(5-abs(i-5)):
        print('*',end='')
        j+=1
    i+=1
    print()
    
    
    