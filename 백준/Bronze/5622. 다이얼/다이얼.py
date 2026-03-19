s = input()
a = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
c = 0
for i in range(len(s)):
    b = a.find(s[i])+1
    if b<4:
        c += 3
    elif b<7:
        c += 4
    elif b<10:
        c += 5
    elif b<13:
        c += 6
    elif b<16:
        c += 7
    elif b<20:
        c += 8
    elif b<23:
        c += 9
    else:
        c += 10
print(c)