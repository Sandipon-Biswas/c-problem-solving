def power(a,n,m):
    r=1
    while n:
        if(n%2==1):
            r=(a*r)%m
            n=n-1
        else:
            a=(a*a)%m
            n//=2
    return r
n=int(input())
rr=power(8,n,10)
print(rr)




