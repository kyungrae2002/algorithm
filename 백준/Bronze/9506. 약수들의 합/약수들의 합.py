while True:
    N = int(input())
    factor_list = []
    if N == -1:
        break
    else:
        for i in range(N-1):
            if N % (i + 1) == 0:
                factor_list.append(i + 1)
        conclusion = f'{N} = {factor_list[0]}'
        if sum(factor_list) == N:
            for i in range(len(factor_list)-1):
                conclusion += f' + {factor_list[i+1]}'
            print(conclusion)
        else:
            print(f'{N} is NOT perfect.')