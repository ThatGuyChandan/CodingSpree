for x in range(0,5):
    n=int(input("enter the four digit number: "))
    first_digit=(n//1000)%10
    second_digit=(n//100)%10
    third_digit=(n//10)%10
    fourth_digit=n%10
    sum=first_digit+second_digit+third_digit+fourth_digit
    
    if sum%3==0:
        print("divisible by 3")
    else:
        print("not divisible by 3")