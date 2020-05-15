k,p=map(int,input().split())
s = 0
while(k):
  s += int(str(k)+str(k)[::-1])
  k -= 1
print(s%p)
