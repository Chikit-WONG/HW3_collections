i=1
n=int(input())
while i<=(2*n-1):
    j=1
    while j<=(n-abs(i-n)):
        print('*',end='')
        j+=1
    i+=1
    print()