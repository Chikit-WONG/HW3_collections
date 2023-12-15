l = [{"name": "John", "age": 23}, 
     {"name": "Jane", "age": 20}, 
     {"name": "Bob", "age": 25}]

def my_sort(l):
    for i in range(len(l)):
        # Find min index and swap with i
        min_index = find_min_index(l, i)
        l[i], l[min_index] = l[min_index], l[i]
        
        
    return l
        


def find_min_index(l, start):
    min_index = start
    for i in range(start+1, len(l)):
        if l[i]["age"] < l[min_index]["age"]:
            min_index = i
    return min_index        
       
def get_sort_key(item):
    return item['age']

print(my_sort(l))