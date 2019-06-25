def max_sum(arr):
    lst = []
    
    for i in range(len(arr)):
        arr = arr[-1:]+arr[:-1]
        add=0
        for i in range(len(arr)):
            #print(i * arr[i])
            add += i * arr[i]
        lst.append(add)
        #print("####")
    
    print("Maximum Sum is :"+str(max(lst)))
    



arr = [8,3,1,2]
max_sum(arr)
