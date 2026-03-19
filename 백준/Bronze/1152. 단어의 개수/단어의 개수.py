s = input()
t= s.count(' ')
if (s[0] == ' ') and (s[len(s)-1] == ' '):
    print(t-1)
elif (s[0] == ' ') or (s[len(s)-1] == ' '):
    print(t)
else:
    print(t+1)