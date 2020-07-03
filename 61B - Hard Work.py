def foo(s):
    s=''.join(s.split('-'))
    s=''.join(s.split(';'))
    s=''.join(s.split('_'))
    return s.lower()
s1=foo(input())
s2=foo(input())
s3=foo(input())
n=int(input())
arr=[s1+s2+s3,s1+s3+s2,s2+s1+s3,s2+s3+s1,s3+s1+s2,s3+s2+s1]
for _ in range(n):
    if foo(input()) in arr:
        print('ACC')
    else:
        print('WA')
