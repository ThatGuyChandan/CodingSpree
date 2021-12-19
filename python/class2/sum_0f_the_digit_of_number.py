n = int(input("Enter any number : "))
sum = 0
while (n != 0):
    sum = sum + (n % 10)
    n = n//10
print("sumof the digits of the number:",sum)