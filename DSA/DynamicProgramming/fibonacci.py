def fibonacci(n):
    dp = [1]*(n+1)

    if n <= 2:
        return 1
    for i in range(3,n+1):
        dp[i] = dp[i-1] + dp[i-2]
    
    return dp[n]

def main():
    n = int(input())
    print("nth fibo:", fibonacci(n))
main()