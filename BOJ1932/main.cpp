#include <iostream>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, dp[501][501] = {{0}};
    std::cin >> n;
    std::cin >> dp[1][1];
    for (int i=2; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            std::cin >> dp[i][j];
            dp[i][j] += (dp[i-1][j-1] > dp[i-1][j])? dp[i-1][j-1] : dp[i-1][j]; 
        }
    }
    int max = 0;
    for (int i=1; i<=n; i++)
        if (max < dp[n][i])
            max = dp[n][i];
    std::cout << max;
    return 0;
}
