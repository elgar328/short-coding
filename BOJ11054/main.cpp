#include <iostream>
#define MAX 1000

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, series[MAX], dp[MAX], rdp[MAX];
    std::cin >> N;
    for (int i=0; i<N; i++)
        std::cin >> series[i];
    for (int i=0; i<N; i++)
    {
        dp[i] = 1;
        for (int j=0; j<i; j++)
        {
            if (series[j] < series[i] && dp[j]+1 > dp[i])
                dp[i] = dp[j] + 1;
        }
    }
    for (int i=N-1; i>=0; i--)
    {
        rdp[i] = 1;
        for (int j=N-1; j>i; j--)
        {
            if (series[i] > series[j] && rdp[j]+1 > rdp[i])
                rdp[i] = rdp[j] + 1;
        }
    }
    int max = 0;
    for (int i=0; i<N; i++)
    {
        if (dp[i] + rdp[i] -1 > max)
            max = dp[i] + rdp[i] -1;
    }
    std::cout << max;
    return 0;
}
