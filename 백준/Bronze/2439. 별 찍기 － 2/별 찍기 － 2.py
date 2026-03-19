n = int(input())
k=''
for i in range(n):
    k=k+' '*(n-1-i)+'*'*(i+1)+'\n'
print(k)