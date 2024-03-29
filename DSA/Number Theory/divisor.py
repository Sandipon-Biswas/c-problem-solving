import math
a=[]
n=16
nn=math.sqrt(n)
for i in range(1,int(nn+1)):
    if(n%i==0):
        a.append(i)
        a.append(n//i)
a.sort()
b=set(a)
print(b)