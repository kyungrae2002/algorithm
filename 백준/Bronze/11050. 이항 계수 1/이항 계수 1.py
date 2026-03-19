N, K = map(int, input().split())
p = 1
for i in range(K):
    p = p*(N-i)
q = 1
for i in range(K):
    q = q*(K-i)
print(int(p/q))