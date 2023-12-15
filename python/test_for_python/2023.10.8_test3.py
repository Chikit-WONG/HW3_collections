def test_func():
    result=compute(1,2)
    print(result)

def compute(x,y):
    return x+y

test_func()

def test_func(haha):
    result=haha(1,2)
    print(result)

def compute(x,y):
    return x+y

test_func(compute)

def test_func(compute):
    result=compute(1,2)
    print(result)

def compute(x,y):
    return x+y

test_func(compute)

def test_func(compute):
    result=compute(1,2)
    print(result)

test_func(lambda x,y:x+y)


