N = int(input())
test_case = []
for i in range(N):
    money = int(input())
    test_case.append(money)
moneys = {25 :0, 10 : 0, 5 : 0, 1 : 0}
for i in test_case:
    money1 = moneys
    for j in money1.items():
        j = list(j)
        count = 0
        while True:
                i -= j[0]
                count += 1
                if i < 0:
                    count -= 1
                    money1[j[0]] = count
                    i += j[0]
                    break
    print(*list(money1.values()))            