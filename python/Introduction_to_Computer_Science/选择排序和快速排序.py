l=[1,5,4,7,8,90,1,1,2,2,5,5,6]
def selection_sort(l:list)->list:
    for i in range(len(l)):
        min_index=find_min_index(l,i)
        l[i],l[min_index]=l[min_index],l[i]
    return l

def find_min_index(l:list,start:int)->int:
    min_index=start
    for i in range(start+1,len(l)):
        if l[i]<l[min_index]:
            min_index=i
    return min_index

def quick_sort(l:list)->list:
    if len(l)<=1:
        return l #别忘了base情况（基础情况/返回情况）
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

print(selection_sort(l)) #选择排序，时间复杂度是o(n^2)
print(quick_sort(l)) #不是真正的快速排序，但易于理解

