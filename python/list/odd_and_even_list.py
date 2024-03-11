list1=[2,3,41,45,66,64,21]
list_even=[]
list_odd=[]
for i in list1:
    if(i%2==0):
        list_even.append(i)
    else:
        list_odd.append(i)
print("list of even number:",list_even)
print("list of odd number:",list_odd)