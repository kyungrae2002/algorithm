s = int(input())
count = 0
for i in range(s):
    k = input()
    blank = []
    for j in range(len(k)):
        if j<1:
            blank.append(k[0])
        else:
            if k[j-1] != k[j]:
                blank.append(k[j])
    count += 1
    for l in range(len(blank)):
        if blank.count(blank[l]) > 1:
            count -= 1
            break
print(count)