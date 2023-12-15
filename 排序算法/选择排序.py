def selection_sort(arr,len):
    for i in range(0,len-1):
        min=i
        for j in range(i+1,len):
            if arr[min]>arr[j]:
                min=j
        if min!=i:
            arr[min],arr[i]=arr[i],arr[min]
