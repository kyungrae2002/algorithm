N, M = map(int, input().split())
numbers = []
for i in range(N):
    numbers.append(i+1)
for k in range(M):
    i, j = map(int, input().split())
    new_num = reversed(numbers[i-1:j])
    numbers[i-1:j] = new_num
for i in range(N):
    print(numbers[i], end=' ')