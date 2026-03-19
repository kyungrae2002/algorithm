N = int(input())
i = 1
if N == 1:
    print(1)
else:
    while True:
        N = N - 6 * i
        i += 1
        if N < 2:
            print(i)
            break