n=int(input())
l=abs(n%10)
ll=abs((n//10)%10)
if(n>0):
    print(n)
elif(l==ll or l>ll):
    print(n//10)
else:
    nn=abs(n)
    print((nn//100)*10+l)
