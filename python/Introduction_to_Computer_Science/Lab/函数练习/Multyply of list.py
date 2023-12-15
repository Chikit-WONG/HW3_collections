def multiple(numbers):
    total=1
    for i in numbers:
        total*=i
    return total

print(multiple([8,2,3,-1,7]))