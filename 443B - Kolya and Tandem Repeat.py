s = input()
k = int(input())
ans = 0

def get_max_tandem_repeat(s, n):
    while n > 0:
        for i in range(len(s) - 2):
            if i + 2 * n > len(s):
                n -= 1
                break
            flag = True
            for j in range(i, i + n):
                if s[j] != s[j+n] and s[j+n] != '_':
                    flag = False
                    break
            if flag:
                return n * 2

if k >= len(s):
    ans = (k + len(s)) // 2 * 2
else:
    s = s + '_' * k
    n = len(s) // 2
    ans = get_max_tandem_repeat(s, n)

print(ans)
