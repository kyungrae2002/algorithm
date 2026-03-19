n = int(input())
for i in range(n):
    k = input()
    cnt = 0
    add = 1
    for j in range(len(k)):
        if j < 1:
            if k[0] == 'O':
                cnt += 1
        else:
            if k[j] == 'O':
                cnt += 1
                if k[j-1] == k[j]:
                    cnt += add
                    add += 1
            else:
                add = 1
    print(cnt)