def sum_thrice(x, y, z):
	if x==y and y==z and z==x:
	    sum=(x+y+z)*3
	else:
	    sum=x+y+z
	return sum    

print(sum_thrice(5, 1, 4))
print(sum_thrice(4, 4, 4))