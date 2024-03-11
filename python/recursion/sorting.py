def swap(a, i, j):
    temp = a[i]
    a[i] = a[j]
    a[j] = temp
 
def bubbleSort(a):
    for k in range(len(a) - 1):
        for i in range(len(a) - 1 - k):
            if a[i] > a[i + 1]:
                swap(a, i, i + 1)
 
a= [4,6,1,2,8,3,9,0]
bubbleSort(a)
print(a)