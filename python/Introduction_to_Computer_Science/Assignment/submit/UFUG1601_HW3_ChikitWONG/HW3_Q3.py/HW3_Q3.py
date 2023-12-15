import math
# Get the number of rows from user input
n=int(input("Enter the number of rows: "))
# Initialize variables
row=1
num_asterisks=1
# Calculate the middle row
middle_row=math.ceil(n/2)
# Outer loop for rows
while row<=n:
    # Calculate spaces before asterisks
    spaces=(n-num_asterisks)//2 
    # Inner loop for printing spaces and asterisks
    for i in range(n):
        if i<spaces:
            print(" ", end="")
        elif i<spaces+num_asterisks:
            print("*", end="")  
    # Print newline for the next row
    print()
    # Update variables for the next row
    if row<middle_row:
        num_asterisks+=2
    else:
        num_asterisks-=2
    row+=1
    