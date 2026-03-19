n = map(int, input().split())
a = []
for i in n:
    a.append(i)
if a == sorted(a):
    print('ascending')
elif a == sorted(a, reverse=True):
    print('descending')
else:
    print('mixed')