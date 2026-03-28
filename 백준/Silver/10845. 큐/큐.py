## 10845
import sys
input = sys.stdin.readline
q = [0]*10000
first = 0
last = 0
N = int(input())
for i in range(N):
    cmd = input().split()
    if(cmd[0] == "push"):
        q[last] = cmd[1]
        last+=1
    elif(cmd[0] == "pop"):
        if(last-first == 0):
            print(-1)
        else:
            print(q[first])
            first+=1
    elif(cmd[0] == "size"):
        print(last-first)
    elif(cmd[0] == "empty"):
        if(last-first == 0):
            print(1)
        else:
            print(0)
    elif(cmd[0] == "front"):
        if(last-first == 0):
            print(-1)
        else:
            print(q[first])
    else:
        if(last-first == 0):
            print(-1)
        else:
            print(q[last-1])