num=int(input("enter the number:") )
reversed_num = 0
x=num

while num != 0:
    digit = num % 10
    reversed_num = reversed_num * 10 + digit
    num //= 10
if x==reversed_num:
    print(x,"is a palindrome!")
else:
    print(x,"is not palindrome!")