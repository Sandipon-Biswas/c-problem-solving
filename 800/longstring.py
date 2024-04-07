t=int(input())
for i in range(t):
    s=input()
    l=len(s)
    if(l<11):
        print(s)
    else:
        sss=s[0]+str(l-2)+s[l-1]
        print(sss)
