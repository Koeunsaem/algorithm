m1, d1, m2, d2 = map(int, input().split())

# Please write your code here.

month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]

def find_day(m, d):
    total_days = 0
    for i in range(1, m):
        total_days += month[i]
    total_days += d
    return total_days

day1 = find_day(m1, d1)
day2 = find_day(m2, d2)

answer = day2- day1
while answer < 0:
    answer += 7

print(day[answer%7])