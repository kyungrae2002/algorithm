## 3273
m = int(input()) ## 숫자 몇개
arr = map(int, input().split()) ## 리스트 받기
target = int(input()) ## 합쳐서 만들어야 하는 숫자
find = [0]*(target+1) ## 저장 
count = 0 ## 쌍찾기
for el in arr:
    if(target < el):
        continue ## el 값이 target 보다 크면 인덱싱 오류
    elif(find[target - el] > 0):
        count+=1 ## 합쳐서 target이 되는 숫자가 앞에 있었나
    find[el]+=1 ## 현재 상태 저장
print(count)