li=list(map(int,input().split()))
a=[]
a.append( li[0]+li[1]+li[2] )
a.append( (li[0]+li[1])*li[2] )
a.append( li[0]* (li[1]+li[2]) )
a.append( li[0]*li[1]*li[2] )
a.sort()

print(a[len(a)-1])