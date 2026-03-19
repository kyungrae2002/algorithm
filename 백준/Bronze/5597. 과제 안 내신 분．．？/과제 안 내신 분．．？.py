numbers = []
for i in range(28):
    i = int(input())
    numbers.append(i)
for i in range(30):
    if (i+1) not in numbers:
        print(i+1)