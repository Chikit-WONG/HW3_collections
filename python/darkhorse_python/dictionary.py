def test1():
    dict1={'apple':1,'banana':2,'orange':3,'grapes':4}
    keys=dict1.keys()
    print(keys)
    print(type(keys))
    for key in keys:
        print(key,end=' ')
    
def test2():
    dict1={'apple':1,'banana':2,'orange':3,'grapes':4}
    values=dict1.values()
    print(values)
    print(type(values))
    for value in values:
        print(value,end=' ')
    
test1()
print()
print()
test2()