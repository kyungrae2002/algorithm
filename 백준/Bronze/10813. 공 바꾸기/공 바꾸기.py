N, M = map(int, input().split())
numbers = []
for i in range(N):
    numbers.append(i+1)
for a in range(M):
    j, k = map(int, input().split())
    b= numbers[j-1]
    numbers[j-1] = numbers[k-1]
    numbers[k-1] = b
for i in range(N):
    print(numbers[i], end=' ')