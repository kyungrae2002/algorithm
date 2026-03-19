T = int(input())
for i in range(T):
    x1, y1, x2, y2 = map(int, input().split())
    n = int(input())
    count = 0
    for j in range(n):
        x, y, r = map(int, input().split())
        dis1 = ((x-x1)**2 + (y-y1)**2)**(1/2)
        dis2 = ((x-x2)**2 + (y-y2)**2)**(1/2)
        if (dis1 < r and dis2 > r) or (dis1 > r and dis2 < r):
            count += 1
    print(count)
