def myfunction(Name,sub1,sub2,sub3,sub4,sub5):
    total=[]
    for i in range (0,10):
        list1=sub1[i]+sub2[i]+sub3[i]+sub4[i]+sub5[i]
        total.append(list1)
    max_index =total.index(max(total))
    print("First place is",Name[max_index])
    
    total.remove(total[max_index])
    Name.remove(Name[max_index])
    max_index =total.index(max(total))
    print("second place is",Name[max_index])

    total.remove(total[max_index])
    Name.remove(Name[max_index])
    max_index =total.index(max(total))
    print("third place is",Name[max_index])

Name=["A","B","C","D","E","F","G","H","I","J"]
sub1=[89,45,77,87,90,34,21,46,96,69]
sub2=[33,56,89,60,50,40,30,67,77,80]
sub3=[45,67,77,66,55,44,33,78,76,50]
sub4=[66,69,45,59,88,79,67,55,80,73]
sub5=[82,60,58,69,43,57,61,64,94,76]
myfunction(Name,sub1,sub2,sub3,sub4,sub5)
