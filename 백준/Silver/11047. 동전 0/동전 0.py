n, k = map(int, input().split())
coins = [int(input()) for _ in range(n)]  # 여러 줄 입력

answer = 0

for coin in reversed(coins):
    if k == 0:
        break
    if k >= coin:
        answer += (k // coin)
        k %= coin

print(answer)