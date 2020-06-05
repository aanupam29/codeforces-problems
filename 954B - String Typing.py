n, s = int(input()), input()
e = 0
for i in range(1,n//2+1):
    if s[:i]==s[i:i*2]: e=i
print(n-max(e-1,0))
