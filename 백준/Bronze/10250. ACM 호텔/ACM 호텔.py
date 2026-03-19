T = int(input())
for i in range(T):
    H, W, N = map(int, input().split())
    if N % H == 0:
        floor = H
        room = N//H
        if room < 10:
            print(str(floor)+'0'+str(room))
        else:
            print(str(floor)+str(room))
    else:
        floor = N % H
        room = N//H + 1
        if room < 10:
            print(str(floor)+'0'+str(room))
        else:
            print(str(floor)+str(room))