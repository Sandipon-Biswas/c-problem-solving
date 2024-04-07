s=input()
s2=[]
r=""
for i in range( len(s) ):
    if(s[i]!='+'):
        s2.append(int(s[i]))
s2.sort()
for i in range(len(s2)):
    r+=str(s2[i]) 
    if(i<(len(s2)-1)):
        r+='+'       
print(r)    