n = int(input())
t = [int(x) for x in input().split()]
val = sum(t)
for i in (x for x in range(3, n) if n % x == 0):
    for j in range(n // i):
        val = max(val, sum(t[j::n // i]))
print(val)
