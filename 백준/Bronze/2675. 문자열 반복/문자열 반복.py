T = int(input())
for i in range(T):
    n, s = input().split()
    for k in range(len(s)):
        print(s[k]*int(n), end='')
    print('')