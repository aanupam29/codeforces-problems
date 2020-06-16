for _ in range(int(input())):
    n, x, m = map(int, input().split())
    l, r = x, x
    for _ in range(m):
        L, R = map(int, input().split())
        if max(l, L) <= min(r, R):
            l = min(l, L)
            r = max(r, R)
            
print(r - l + 1)
