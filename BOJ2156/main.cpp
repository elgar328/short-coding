#include <iostream>
#include <unordered_map>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, nums[10001];
    unsigned long long dp[10001], tmp;
    std::cin >> n;
    for (int i=1; i<=n; i++)
        std::cin >> nums[i];
    dp[0] = 0;
    dp[1] = nums[1];
    dp[2] = dp[1] + nums[2];
    for (int i=3; i<=n; i++)
    {
        tmp = dp[i-1];
        if (tmp < (dp[i-2] + nums[i]))
            tmp = (dp[i-2] + nums[i]);
        if (tmp < (dp[i-3] + nums[i-1] + nums[i]))
            tmp = dp[i-3] + nums[i-1] + nums[i];
        dp[i] = tmp;
    }
    std::cout << dp[n];
    return 0;
}
