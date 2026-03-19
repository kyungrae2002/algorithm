matrix = []
for i in range(5):
    matrix.append(list(input()))
letters = ''
max_len = 0
for i in matrix:
    max_len = max(max_len, len(i))
for i in range(max_len):
    for j in range(len(matrix)):
        try:
            letters += matrix[j][i]
        except:
            letters += ''
print(letters)