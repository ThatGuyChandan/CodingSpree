for a in range(1,4):
  for b in range(1,4):
    for c in range(1,4):
        if a!=b and b!=c and c!=a:
            print(a,end="")
            print(b,end="")
            print(c,end="")
            print("")