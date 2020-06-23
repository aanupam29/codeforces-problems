def subset(s1,s2):
	d={}
	for i in s1:
		d[i]=1
	flag=0
	for i in s2:
		if i not in d:
			flag=1
			break
	if flag==0:
		return True
	else:
		return False
 
n=int(input())
l=[]
for i in range(n):
	l.append(list(map(int,input().split()))[1:])
for i in range(n):
	ans='YES'
	for j in range(n):
		if i!=j:
			if subset(l[i],l[j]):
				ans="NO"
				break
	print (ans)
