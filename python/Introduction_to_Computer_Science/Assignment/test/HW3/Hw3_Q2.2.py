# n=int(input())
# row=1
# num_asterisks=1
# while row<=n:
#     spaces=(n-row)*" "
#     print(spaces+num_asterisks*"*")
#     row+=1
#     num_asterisks+=2
n=int(input("Enter the number of rows: "))
row=1
num_asterisks=1
while row<=n:
    spaces=(n-row)*" "
    print(spaces+num_asterisks*"*")
    row+=1
    num_asterisks+=2