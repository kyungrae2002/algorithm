N = int(input())
list1 = []
for i in range(N):
    k = int(input())
    if k not in list1:
        list1.append(k)
list1.sort()
for i in list1:
    print(i)