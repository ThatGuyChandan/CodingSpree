num=1
while num<=500:
    s=0
    n=num
    while n>0:
        r=n%10
        s=s+r**3
        n=n//10
        
    if s==num:
        print(num,"is armstrong number")    
    num=num+1
