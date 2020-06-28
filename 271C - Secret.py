n, m = map(int, input().split())
if n // m < 3:
    print(-1)
    exit()
res = []
for i in range(m):
    res.append(i+1)
    res.append(i+1)
for i in range(m):
    res.append(i+1)
print(' '.join(map(str, res)), '1 ' * (n - 3*m))
