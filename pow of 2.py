n=int(input())
s=[]
while(n>0):
    x=n%2
    n=n//2
    s.append(x)
s.reverse()
count=0
for i in s:
    if(i==1):
        count=count+1
if(count==1):
    print('yes')
else:
    print('no')