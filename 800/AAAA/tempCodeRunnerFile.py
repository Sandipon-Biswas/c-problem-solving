n=int(input())

l1=list(map(int,input().split()))

l2=list(map(int,input().split()))

s=set()
for i in range(len(1,l1)):
    if(l1[i]!=0):
        s.add(l1[i])
for i in range(len(1,l2)):
    if(l2[i]!=0):
        s.add(l2[i])

try:
    if(max(s)==n and len(s)==n):
        print("I become the guy.")
    else:
        print("Oh, my keyboard!")
except:
    print("Oh, my keyboard!")
# end try