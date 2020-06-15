import sys
input=sys.stdin.readline
def neg(a):
    b=""
    for i in range(len(a)):
        if a[i]=="+":
            b+="*"
        else:
            b+="+"
    return b
 
n=int(input())
a="+"
e=[a]
for i in range(n):
    for j in range(2**i):
        b=e[j]
        e[j]+=b
        e.append(b+neg(b))
for i in range(len(e)):
    print(e[i])
