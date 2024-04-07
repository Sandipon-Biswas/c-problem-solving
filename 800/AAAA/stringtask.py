s=input()
s=s.lower()
s2="."
s3=""
for i in range(len(s)):
    if(s[i]=='a'or s[i]=='e'or s[i]=='i'or s[i]=='o'or s[i]=='u'or s[i]=='y'):
        continue
    else:
        s2+=s[i]
        s2+='.'
for i in range(len(s2)-1):
    s3+=s2[i]
print(s3)
        
