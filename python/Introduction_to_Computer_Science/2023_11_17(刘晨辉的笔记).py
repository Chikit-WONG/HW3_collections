l = [1,1,2,9,4,3,6,7,4,9,0]

# def selection_sort(l):
#     for i in range(len(l)):
#         #find the min index and swap with l[i]
#         min_index = find_min_index(l, i)
#         l[i], l[min_index] = l[min_index], l[i]
        
#     return l

# def find_min_index(l, start):
#     min_index = start
#     for i in range(start, len(l)):
#         if l[i] < l[min_index]:
#             min_index = i
#     return min_index


# def quick_sort(l):
#     #base case
#     if len(l) <= 1:
#         return l
#     #pick pivot element
#     pivot = l[0]
#     smaller_buket  = []
#     equal_buket = []
#     larger_buket = []
#     for item in l[1:]:
#         if item < pivot:
#             smaller_buket.append(item)
#         if item > pivot:
#             larger_buket.append(item)
#         if item == pivot:
#             equal_buket.append(item)

#     return quick_sort(smaller_buket) + [pivot] +equal_buket+  quick_sort(larger_buket)

def quick_sort(l:list)->list:
    if len(l)<=1:
        return l
    pivot=l[0]
    smaller_bucket=[]
    equal_bucket=[]
    bigger_bucket=[]
    for item in l[1:]:
        if pivot<item:
            bigger_bucket.append(item)
        if pivot>item:
            smaller_bucket.append(item)
        if pivot==item:
            equal_bucket.append(item)
    return quick_sort(smaller_bucket)+[pivot]+equal_bucket+quick_sort(bigger_bucket)

def selection_sort(l:list)->list:
    for i in range(len(l)):
        min=find_min_index(l,i)
        l[i],l[min]=l[min],l[i]
    return l

def find_min_index(l:list,start:int)->int:
    min=start
    for i in range(start+1,len(l)):
        if(l[i]<l[min]):
            min=i
    return min

def selection_sort2(l:list)->list:
    for i in range(len(l)):
        min=i
        for j in range(i+1,len(l)):
            if l[j]<l[min]:
                min=j
        l[i],l[min]=l[min],l[i]
    return l

# print(quick_sort(l))
# print(type(quick_sort(l)))
print(selection_sort2(l))