n=int(input())
a=[]
for i in range(n):
    li=list(map(int,input().split()))
    x=(li[0],li[1])
    a.append(x)
c=0
p=0
for i in range(n):
    for j in range(n):
        if(j!=p and a[p][0]==a[j][1]):
            c=c+1
    p=p+1
print(c)