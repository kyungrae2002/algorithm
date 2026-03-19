N, K = map(int, input().split())
factor_list = []
for i in range(N):
    if N%(i+1) == 0:
        factor_list.append(i+1)
if len(factor_list) > K-1:
    print(factor_list[K-1])
else:
    print(0)