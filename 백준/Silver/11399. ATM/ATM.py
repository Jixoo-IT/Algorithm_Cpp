n = int(input())
time = list(map(int, input().split()))

answer = 0
time.sort()

for i in range(n):
    answer += (time[i] * (n - i))
    
print(answer)