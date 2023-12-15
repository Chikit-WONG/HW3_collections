import secrets
c=0
a=secrets.randbelow(100)
while c==0:
    b=int(input("Please enter a number"))
    if b>a:
        print("too high")
    elif b<a:
        print("too low")
    elif a==b:
        print("correct")
        c=1
        
    