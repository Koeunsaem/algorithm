n, m = map(int,input().split())
num = list(map(int,input().split()))
max = 0

for i in range(n-2):
    for j in range(i+1, n-1):
        for k in range(j+1, n):
            sum = num[i]+num[j]+num[k]
            if(sum<=m and sum>max):
                max=sum
print(max)