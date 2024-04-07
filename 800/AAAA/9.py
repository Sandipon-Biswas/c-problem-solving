n=int(input())
li=list(map(int,input().split()))
r=[]
for i in range(1,n+1):
    for j in range(n):
        if(li[j]==i):
            r.append(j+1)
            break
for i in r:
    print(i,end=" ")
