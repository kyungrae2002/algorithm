N = int(input())
numbers = list(map(int, input().split()))
max_score = max(numbers)
total = 0
for i in range(N):
    total = total + (numbers[i]/max_score)*100
print(total/N)