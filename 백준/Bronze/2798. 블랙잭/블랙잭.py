N, M = map(int, input().split())
list2 = list(map(int, input().split()))
new_list = []
for i in range(N-2):
    for j in range(i+1, N-1):
        for k in range(j+1, N):
            new_list.append(list2[i] + list2[j] + list2[k])
fix_list = []
for i in new_list:
    k = M - i
    if k >= 0:
        fix_list.append(k)
print(M - min(fix_list))