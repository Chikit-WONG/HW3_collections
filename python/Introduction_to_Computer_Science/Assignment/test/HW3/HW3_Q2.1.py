
n=int(input())
i=1
m=n
k=1
while i<=n:
    j=1
    while j<=m-1:
        print(" ",end='')
        j+=1
    print('*'*k)
    i+=1
    m-=1
    k+=2
    print()
    