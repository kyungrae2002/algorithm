alphabet = 'abcdefghijklmnopqrstuvwxyz'
L = int(input())
s = str(input())
k = 0
for i in range(L):
    k += (31**(i))*(alphabet.find(s[i])+1)
print(k % 1234567891)