people={}
print(people)
def add(people,key,value):
    if key in people:
        people[key].append(value)
    else:
        people[key]=value
        


add(people,"key1",["Jack",18,"red"])
print(people)
print(people["key1"])
    