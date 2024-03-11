x=[500,200,100,50,10,5,1]
amount=int(input("enter the amount:"))
i=0
s=0
while amount>0:
  if amount>x[i]:
    count=amount//x[i]
    s=count+s
    print( "requires", count, "notes of", x[i] )
  amount=amount%x[i]
  i+=1
print("total number of notes required is:",s)  