s = input()
c_list = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
for i in c_list:
    s = s.replace(i, 'a')
print(len(s))
