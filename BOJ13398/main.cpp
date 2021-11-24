#include <iostream>
#define MAX 100001

int max(int a, int b)
{
    return (a > b)? a : b;
}

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, series[MAX];
    long long dp[MAX][2], max_val;
    std::cin >> n;
    for (int i=1; i<=n; i++)
        std::cin >> series[i];
    dp[1][0] = series[1];
    dp[1][1] = 0;
    for (int i=2; i<=n; i++)
    {
        dp[i][0] = max(dp[i-1][0] + series[i], series[i]);
        dp[i][1] = max(dp[i-1][0], dp[i-1][1] + series[i]);
    }
    max_val = series[1];
    for (int i=2; i<=n; i++)
    {
        if (dp[i][0] > max_val)
            max_val = dp[i][0];
        if (dp[i][1] > max_val)
            max_val = dp[i][1];
    }
    std::cout << max_val;
    return 0;
}
