tt=int(input())
for _ in range(tt):
    n=int(input())
    a=list(map(int, input().split()))
    two=0
    f=1
    for i in a:
        if(i==2):
            two+=1
    two2=0
    for i in range(n):
        if(a[i]==2):
            two2+=1
        if(two2*2==two):
            print(i+1)
            f=0
            
            break
    if(f==1):
        print(-1)     