input_fact = open('input_fact.txt', 'r')
output_fact=open('output_fact.txt','w+')

nums=input_fact.readlines()
a=[]
for i in nums:
    a.append(eval(i))
import math
for i in a:
    fact=str(math.factorial(i))+'\n'
    output_fact.write(fact)

input_fact.close()
output_fact.close()