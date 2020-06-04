def step(cur, x):
    if(cur - x > 0):
        return cur - x
    else:
        return cur + x

n, k, s = map(int, input().split())
cur = 1

if(k > s or k * (n - 1) < s):
    print('NO')
else:
    print('YES')
    while(k > 0):
        l = min(n - 1, s - (k - 1))
        cur = step(cur, l)
        print(cur, end = ' ')
        s -= l
        k -= 1
