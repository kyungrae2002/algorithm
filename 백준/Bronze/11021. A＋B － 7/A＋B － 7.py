T= int(input())
import sys
for i in range(1,T+1):
    x, y = map(int, sys.stdin.readline().split())
    print('Case #'+str(i)+':', x+y)