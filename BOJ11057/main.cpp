#include <iostream>

int main()
{
    int N, dp[10][1001] = {{0}}, mod = 10007;
    std::cin >> N;
    for (int i=0; i<10; i++)
        dp[i][1] = 1;
    for (int i=2; i<=N; i++)
    {
        for (int j=0; j<10; j++)
        {
            int sum = 0;
            for (int k=j; k<10; k++)
            {
                sum += dp[k][i-1];
                sum %= mod;
            }
            dp[j][i] = sum;
        }
    }
    int sum = 0;
    for (int i=0; i<10; i++)
    {
        sum += dp[i][N];
        sum %= mod;
    }
    std::cout << sum;
}
