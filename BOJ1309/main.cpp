#include <iostream>

int main()
{
    int N, dp[3][100001] = {{0,1},{0,1},{0,1}};
    std::cin >> N;
    for (int i=2; i<=N; i++)
    {
        dp[0][i] = (dp[0][i-1]+dp[1][i-1]+dp[2][i-1])%9901;
        dp[1][i] = (dp[0][i-1]+dp[2][i-1])%9901;
        dp[2][i] = (dp[0][i-1]+dp[1][i-1])%9901;
    }
    std::cout << (dp[0][N]+dp[1][N]+dp[2][N])%9901;
    return 0;
}
