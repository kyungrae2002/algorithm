N, M = map(int, input().split())
matrix1 = []
for i in range(N):
    matrix1.append(list(map(int, input().split())))
matrix2 = []
for j in range(N):
    matrix2.append(list(map(int, input().split())))
final_matrix = []
row_matrix = []
for i in range(N):
    row_matrix = []
    for j in range(M):
        row_matrix.append(matrix1[i][j] + matrix2[i][j])
    final_matrix.append(row_matrix)

for i in final_matrix:
    print(*i)