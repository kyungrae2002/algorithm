s = input().upper()
alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
b_list = []
c = []
for i in range(26):
    b_list.append(s.count(alphabet[i]))
m = max(b_list)
for i in range(26):
    if b_list[i] == m:
        c.append(i)
        p = i
if len(c)>1:
    print('?')
else:
    print(alphabet[p])