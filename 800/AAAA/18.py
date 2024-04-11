s=input()
r=[]
for i in range(len(s)):
    if(s[i]!='{' and s[i]!=' ' and s[i]!='}' and s[i]!=',' ):
        r.append(s[i])
rr=set(r)
print(len(rr))
