# Get the number of rows from user input
n=int(input("Enter the number of rows: "))
# Initialize the row number to 1
row=1
# Initialize the number of asterisks to print on the first row
num_asterisks=1
# Outer while loop for iterating through rows
while row<=n:
    # Calculate the number of spaces before asterisks
    space_count=n-row
    # Initialize the counter for printed asterisks on the current row
    asterisks_count=1
     # Inner while loop for printing spaces and asterisks on each row
    while space_count>0 or asterisks_count<=num_asterisks:
        # If there are spaces to print, print a space
        if space_count>0:
            print(" ",end='')
             # Decrease the space_count
            space_count-=1
        # If there are no more spaces to print, print an asterisk
        else:
            print("*",end="")
            # Increase the asterisks_count
            asterisks_count+=1
     # Print a newline after each row of spaces and asterisks
    print()
    # Move to the next row
    row+=1
     # Increment the number of asterisks for the next row by 2
    num_asterisks+=2
    
    