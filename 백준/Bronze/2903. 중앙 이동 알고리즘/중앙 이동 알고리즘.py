def function1(a):
    if a == 1:
        return 3
    else:
        return 2*function1(a-1) - 1
N = int(input())
print(function1(N)**2)