str1=input("enter the first string: ")
str2=input("enter the second string: ")

if(sorted(str1)== sorted(str2)):
    print("The strings are anagrams.")
else:
    print("The strings aren't anagrams.")    