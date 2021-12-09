a = float(input("Enter first side: "))  
b = float(input("Enter second side: "))  
c = float(input("Enter third side: "))  
tp=a+b+c
print("perimeter of triangle is",tp)  
s = (a + b + c) / 2   
ta = (s*(s-a)*(s-b)*(s-c)) ** 0.5  
print(" area of the triangle is",ta) 

r=float(input("enter radius of circle: "))
cp=2*3.14*r
print("perimeter of the circle is",cp)
ca=3.14*r*r
print("area of the circle is",ca)