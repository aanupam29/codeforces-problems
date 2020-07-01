n,k = map(int,raw_input().split())
a = map(int,raw_input().split())

a.sort()

i1 = (k-1)/n
j1 = (k-1)%n
if (a.count(a[i1]) !=1 ):
    j1 = (n*(i1-a.index(a[i1]))+j1)/a.count(a[i1])

print a[i1],a[j1]
