list1 = []
total = 0
for i in range(5):
    k = int(input())
    total += k
    list1.append(k)
list1.sort()
print(int(total / 5))
print(list1[2]) 