N, B = map(str, input().split())
length = len(N)
B = int(B)
convert_num = 0
alphabet = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = [10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35]
for i in range(length):
    if N[length-i-1] in alphabet:
        convert_num += (B**i)*numbers[alphabet.index(N[length-i-1])]
    else:
        convert_num += (B**i)*int(N[length-i-1])
print(convert_num)