numb=int(input("enter the 4 digit number "))
d=numb%10
c=(numb//10)%10
b=(numb//100)%10
a=(numb//1000)%10
reverseNumb=d*1000+c*100+b*10+a
print(reverseNumb)