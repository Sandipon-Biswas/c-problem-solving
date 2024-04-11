n,m=map(int,input().split())
t=list(map(int,input().split()))
c=0
for i in range(n-1):
    c+=t[i]+10
c+=t[n-1]
if(c>m):
    print(-1)
else:
    r=(n-1)*2+(m-c)//5
    print(r)