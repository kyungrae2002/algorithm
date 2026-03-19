a, b, c = map(int, input().split())
if a==b==c:
    print(10000+1000*a)
elif a==b!=c or a==c!=b:
    print(1000+100*a)
elif a!=b==c:
    print(1000+100*b)
else:
    print(max(a, b, c)*100)