n = int(input())

# Please write your code here.
digit = []
idx = 0

while n>2:
    digit.append(n%2)
    n //= 2
    idx += 1

digit.append(n)

for i in digit[::-1]:
    print(i, end="")