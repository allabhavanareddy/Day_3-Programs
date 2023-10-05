n=int(input())
s=[]
while(n>0):
    x=n%2
    n=n//2
    s.append(x)
s.reverse()
count=0
count1=0
for i in s:
    if(i==1):
        count=count+1
    else:
        count1=count1+1
if(count==1) and (count1 & 1==0):
    print('yes')
else:
    print('no')