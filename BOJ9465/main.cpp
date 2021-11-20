#include <iostream>
#include <string>

int max(int a, int b)
{
    return (a > b)? a : b;
}
int max(int a, int b, int c)
{
    if (b > a)
        a = b;
    if (c > a)
        a = c;
    return a;
}
int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T, n, score[2][100001], dp[3][100001];
    std::cin >> T;
    while (T--)
    {
        std::cin >> n;
        for (int i=0; i<2; i++)
            for (int j=1; j<=n; j++)
                std::cin >> score[i][j];
        dp[0][1] = 0;
        dp[1][1] = score[0][1];
        dp[2][1] = score[1][1];
        for (int i=2; i<=n; i++)
        {
            dp[0][i] = max(dp[0][i-1], dp[1][i-1], dp[2][i-1]);
            dp[1][i] = max(dp[0][i-1], dp[2][i-1]) + score[0][i];
            dp[2][i] = max(dp[0][i-1], dp[1][i-1]) + score[1][i];
        }
        std::cout << max(dp[0][n], dp[1][n], dp[2][n]) << '\n';
    }
    return 0;
}
