AsciiValue=int(input("enter the number "))
if AsciiValue>=65 and AsciiValue<=90:
 print("capital letter")
 if AsciiValue>=97 and AsciiValue>=122:
  print("small letter")
  if AsciiValue>=48 and AsciiValue<=57:
   print("digit")
  elif AsciiValue>=0 and AsciiValue<=47 or AsciiValue>=58 and AsciiValue<=64 or AsciiValue>=91 and AsciiValue<=96 or AsciiValue>=123 and AsciiValue<=127:
   print("special symbol")


  