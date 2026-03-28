import sys
input = sys.stdin.readline
stack = [0]*10000
length = 0
N = int(input())
for i in range(N):
    cmd = input().split()
    if(cmd[0] == "push"):
        stack[length] = cmd[1]
        length+=1
    elif(cmd[0] == "pop"):
        if(length <= 0):
            print(-1)
        else:
            print(stack[length-1])
            length-=1
    elif(cmd[0] == "size"):
        print(length)
    elif(cmd[0] == "empty"):
        if(length == 0):
            print(1)
        else:
            print(0)
    else:
        if(length ==0):
            print(-1)
        else:
            print(stack[length-1])        
