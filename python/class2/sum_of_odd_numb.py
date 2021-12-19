n=int(input("enter the number:"))
count=0
x=1
while x<=n :
    if(x%2!=0):
        count+=1
    x+=1
print("sum of odd number b/w 1 to",n,"=",count)        