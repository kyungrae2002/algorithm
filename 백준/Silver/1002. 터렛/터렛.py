T = int(input())
for i in range(T):
    x, y, r, a, b, c = map(int, input().split())
    dis = ((x-a)**2 + (y-b)**2)**(1/2)
    if x == a and y == b and r == c:
        print(-1)
    elif dis == r+c or dis == abs(r-c):
        print(1)
    elif abs(r-c) < dis < abs(r+c):
        print(2)
    else:
        print(0)