# Get the number of rows from user input
n=int(input("Enter the number of rows: "))
# Initialize row number to 1
row=1
# Outer while loop for iterating through rows
while row<=2*n-1:
    # Initialize counter variable for inner loop
    i=1
     # Inner while loop for printing asterisks on each row
    while i<=(n-abs(n-row)):
        # Print asterisk without newline
        print("*",end='')
        # Increment the counter variable
        i+=1
    # Print newline after each row of asterisks
    print()
    # Update variables for next row and move to the next row
    row+=1
    
    