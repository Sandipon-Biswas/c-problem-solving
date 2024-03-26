t=int(input())
while(t>0):
    x=int(input())
    li=list(map(int,input().split()))
    c=0
    for i in range(x):
        if(li[i]>(c+i+1)):
            c=c+li[i]-(c+1+i)
    print(c)
    t=t-1




