m1, d1, m2, d2 = map(int, input().split())

# Please write your code here.

month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]

total_days = 0
for i in (1, m2):
    total_days += month[i]
total_days += d2

for i in (1, m1):
    total_days -= month[i]
total_days -= d1

total_days += 1

print(day[total_days%6])