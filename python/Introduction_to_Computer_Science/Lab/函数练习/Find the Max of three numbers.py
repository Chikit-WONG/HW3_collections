def max_of_two(x,y):
    if x>y:
        return x
    return y
def max_of_three(x,y,z):
    return max_of_two(z,max_of_two(x,y)) 

print(max_of_three(3,6,-5))