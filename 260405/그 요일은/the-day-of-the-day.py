m1, d1, m2, d2 = map(int, input().split())
A = input()

# Please write your code here.
month = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun']

def find_day(m, d):
    total_days = 0
    for i in range(1, m):
        total_days += month[i]
    total_days += d
    return total_days

diff = find_day(m2, d2) - find_day(m1, d1)

idx = 0
for i in day:
    if i == A:
        break
    idx += 1

answer = 0
answer = diff//7
diff %= 7
if idx <= diff:
    answer += 1

print(answer)