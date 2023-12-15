# def check__age(age):
#     if age>18:
#         return True

# print(check__age(1))

def test_func(compute):
    result=compute(1,2)
    return result

test_func(lambda x,y: x+y)