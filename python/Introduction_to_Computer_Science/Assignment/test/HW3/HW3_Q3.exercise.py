import math
n=int(input())
row=1
num_asterisks=1
middle_row=math.ceil(n/2)
while row<=n:
    spaces=(n-num_asterisks)//2
    for i in range(n):
        if i<spaces:
            print(" ",end='')
        elif i<spaces+num_asterisks:
            print("*",end="")
    print()
    if row<middle_row:
        num_asterisks+=2
    else:
        num_asterisks-=2
    row+=1