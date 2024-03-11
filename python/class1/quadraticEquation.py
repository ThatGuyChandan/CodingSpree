import cmath
  
a = float(input("enter the value:"))
b = float(input("enter the value:"))
c = float(input("enter the value:"))
  
# discriminant
dis = (b**2) - (4 * a*c)
 
root1 = (-b-cmath.sqrt(dis))/(2 * a)
root2 = (-b + cmath.sqrt(dis))/(2 * a)
 
print("The roots are:")
print(root1)
print(root2)