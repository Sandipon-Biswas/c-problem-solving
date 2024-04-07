n=int(input())
li=list(map(int,input().split()))

si=0

for i in range(n):
    if(li[i]<=li[si]):
        si=i
bi=0
for i in range(n):
    if(li[i]>li[bi]):
        bi=i

# print(si)
# print(bi)
r=bi+(n-si-1)
if(bi>si):
    r=r-1

print(r)