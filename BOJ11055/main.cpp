#include <iostream>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, series[1000], dp[1000] = {0};
    std::cin >> n;
    for (int i=0; i<n; i++)
        std::cin >> series[i];
    for (int i=0; i<n; i++)
    {
        dp[i] = series[i];
        for (int j=0; j<i; j++)
        {
            if (series[j] < series[i] && dp[j] + series[i] > dp[i])
                dp[i] = dp[j] + series[i];
        }
    }
    int max = 0;
    for (int i=0; i<n; i++)
        if (max < dp[i])
            max = dp[i];
    std::cout << max;
    return 0;
}
