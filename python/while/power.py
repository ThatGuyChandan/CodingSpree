a=int(input("enter the base:"))
b=int(input("enter the  power:"))
p=1
if a==0:
    print(0)
else:    
  while b>0:
    p=p*a
    b=b-1
  print(p)    