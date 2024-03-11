def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
a=int(input("Enter the number:"))
b=int(input("Enter the number:"))
gcd=gcd(a,b)
print("greatest common divisor (gcd) is:",gcd)
 