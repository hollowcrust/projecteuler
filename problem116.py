n = 50
def sol(m, n):
    memo = [1] * m + [0] * (n-m+1)
    for j in range(m, n+1):
        memo[j] += memo[j - 1] + memo[j - m]
    return memo[n] - 1

print(sol(2, n) + sol(3, n) + sol(4, n))
