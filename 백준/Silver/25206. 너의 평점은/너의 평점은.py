total_sum = 0
total_num = 0
scores = ['A+', 'A0', 'B+', 'B0', 'C+', 'C0', 'D+', 'D0']
nscores = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0]
for i in range(20):
    k = input()
    loc = k.find(' ')
    loc2 = k.find(' ', loc+1)
    if k[loc2+1] == 'P':
        total_num -= 0
    elif k[loc2+1] == 'F':
        total_num += float(k[loc+1: loc+4])
    else:
        total_sum += float(k[loc+1: loc+4]) * nscores[scores.index(k[loc2+1: loc2+3])]
        total_num += float(k[loc+1: loc+4])
print(total_sum / total_num)