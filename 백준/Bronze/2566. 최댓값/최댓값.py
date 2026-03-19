matrix = []
for j in range(9):
    matrix.append(list(map(int, input().split())))
x = 0
y = 0
max_val = 0
for i in range(9):
    for j in range(9):
        k = matrix[i][j]
        if max_val <= k:
            x = i + 1
            y = j + 1
            temp = k
            max_val = k
print(max_val)
print(x, y)
