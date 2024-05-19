test = int(input())

for i in range(test):
    answer = input()
    cnt = 0
    sum = 0
    for j in range(len(answer)):
        if answer[j] == 'O':
            cnt += 1
            sum += cnt
        else:
            cnt = 0
    print(sum)