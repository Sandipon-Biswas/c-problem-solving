def prime(n):
    if n==2:
        return True
    if n%2==0 or n==1:
        return False
    for i in range(3,n,2):
        if n%i == 0 :
            return False
    return True
 
def aPrime(n):
    count = 0
    for i in range(2,int((n/2)+1)):
        if n%i==0 and prime(i):
            count+=1
    if count==2:
        return True
       
 
tcount=0
n = int(input())
 
for i in range(1,n+1):
    if aPrime(i):
        tcount+=1
 
print(tcount)