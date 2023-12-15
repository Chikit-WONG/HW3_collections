# Get the number of rows from user input
n = int(input("Enter the number of rows: "))
# Initialize variables
row=1
num_asterisks=1
# Outer while loop for iterating through rows
while row<=n:
    # Inner loop for spaces before asterisks
    spaces=(n-row)*" "
    print(spaces+num_asterisks*"*")  
    # Update variables for next row
    row+=1
    num_asterisks+=2
    