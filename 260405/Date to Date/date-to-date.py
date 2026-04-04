m1, d1, m2, d2 = map(int, input().split())

# Please write your code here.
month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

answer = 0
for i in range(1, m2+1):
    answer += month[i]
answer += d2

for i in range(1, m1+1):
    answer -= month[i]
answer -= d1

if answer == 0:
    answer += 1
print(answer)