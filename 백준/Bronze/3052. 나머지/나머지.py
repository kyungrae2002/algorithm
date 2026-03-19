numbers = []
for i in range(10):
    x = int(input())
    y = x%42
    if y not in numbers:
        numbers.append(y)
print(len(numbers))