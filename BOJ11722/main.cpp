#include <iostream>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, series[1000], dp[1000];
    std::cin >> N;
    for (int i=0; i<N; i++)
        std::cin >> series[i];
    for (int i=0; i<N; i++)
    {
        dp[i] = 1;
        for (int j=0; j<i; j++)
        {
            if (series[j] > series[i] && dp[j]+1 > dp[i])
                dp[i] = dp[j] + 1;
        }
    }
    int max = 1;
    for (int i=0; i<N; i++)
        if (max < dp[i])
            max = dp[i];
    std::cout << max;
    return 0;
}
