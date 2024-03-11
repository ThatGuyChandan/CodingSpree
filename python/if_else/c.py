h=float(input("enter Hardness value "))
c=float(input("enter Carbon content value "))
t=float(input("enter tensile strength value "))
if h>50 and c<0.7 and t>5600:
    print("Grade is 10")
elif h>50 and c<0.7 and t<=5600:
    print("Grade is 9")
elif h<=50 and c<0.7 and t>5600:
    print("Grade is 8")
elif h>50 and c>=0.7 and t>5600:
    print("Grade is 7")
elif h>50 or c<0.7 or t>5600:
    print("Grade is 6")
else:
    print("Grade is 5")    
