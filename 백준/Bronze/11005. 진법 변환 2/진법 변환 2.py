N, B = map(int, input().split())

s = ''
numbers = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
while N:
    s += str(numbers[N%B])
    N //= B
print(s[::-1])
