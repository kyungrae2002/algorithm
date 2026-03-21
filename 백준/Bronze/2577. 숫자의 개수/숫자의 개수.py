mul =1 #곱하기 결과
for i in range(3):
    a = int(input()) # 매번 받고
    mul *= a ## 매번 곱하기
nums = [0]*10 ## 빈 배열 만들기
while(mul >= 1): ## 곱셈 결과가 1이상일때
    if(int(mul%10) >= 0): 
        nums[int(mul%10)] += 1
    mul/=10
for i in nums:
    print(i)
