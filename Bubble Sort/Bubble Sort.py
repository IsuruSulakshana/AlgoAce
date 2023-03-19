def BubbleSort(array):
    n = len(array)
    for k in range(0,(n-1)):
        for i in range(0, (n-k-1)):
            if (array[i] > array[i+1]):
                array[i], array[i+1] = array[i+1], array[i]
            else:
                pass
    return a

a = [2,8,1,3,5,7,6]
T = BubbleSort(a)
print(T)

