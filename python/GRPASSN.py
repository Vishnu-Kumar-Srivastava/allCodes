t=int(input())
for i in range(t):
 n=int(input())
 arr=list(map(int,input().split()))
 d={}
 count=0
 for i in arr:
  if(i not in d):
   d[i]=1
  else:
   d[i]=d[i]+1 
 for i in d:
  if d[i]%i==0:
   count=1
  else:
   count=0
   break
 if count==1:
  print('YES')
 else:
  print("NO")  

