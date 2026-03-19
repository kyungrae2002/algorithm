N, M = map(int, input().split())
basket = []
for _ in range(N):
    basket.append(0)
for a in range(M):
    i, j, k = map(int, input().split())
    for l in range(i,j+1):
        basket[l-1] = k
for a in range(N):
    print(basket[a], end=" ")