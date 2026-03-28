import sys
input = sys.stdin.readline
N = int(input())
stack = []
'''
새로운 숫자가 들어온다 -> 숫자가 지금보다 크다, 작다 같다
숫자가 지금보다 크다 -> 앞에서 봤을 때 가려지니까 자신보다 큰 숫자가 나올때까지 pop
혹은 스택의 크기가 1일때까지 pop 을 한다. (자신은 남겨야 하니까)
자신 보다 작은 숫자가 나온다면 그냥 append 하면 됨
자신과 같은 숫자가 나온다면 그냥 continue
최종적으로 남은 숫자는 내림 차순 형태로 정리되어 있을거고 결국 남아있는 숫자
카운트 하면 됨
처음 상태에서 만약에 아무것도 없다면 무조건 append함

'''
for i in range(N):
    m = int(input())
    if(len(stack)==0):
        stack.append(m)
        continue
    if(m > stack[len(stack)-1]):
        while(len(stack)!= 0 and stack[len(stack)-1] <= m):
            ## 5 4 3 2 9
            stack.pop()
        stack.append(m)
    elif(m == stack[len(stack)-1]):
        continue
    else:
        stack.append(m)
print(len(stack))
