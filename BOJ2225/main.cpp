#include <iostream>

int main()
{
    int N, K;
    unsigned long long mod = 1000000000, dp[201][201] = {{0}};
    std::cin >> N >> K;
    for (int n=0; n<=N; n++)
        dp[1][n] = 1;
    for (int k=1; k<=K; k++)
        dp[k][0] = 1;
    for (int n=1; n<=N; n++)
        for (int k=2; k<=K; k++)
            dp[k][n] = (dp[k-1][n] + dp[k][n-1]) % mod;
    std::cout << dp[K][N];
    return 0;
}
