list1=[4,8,1,3,9,5,10]
for i in range(0,len(list1)):
    for j in range(0,len(list1)-i-1):
        if(list1[j]>list1[j+1]):
            temp=list1[j]
            list1[j]=list1[j+1]
            list1[j+1]=temp 
print("second largest number is:",list1[-2])