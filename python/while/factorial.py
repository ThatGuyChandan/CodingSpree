num=int(input("enter the number: "))
factorial=1
x=num
while num>0:
    factorial=factorial*num
    num=num-1
print("factorial of ",x,"is",factorial)