#include <iostream>
#include <vector>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T, input, max_n = 0; 
    unsigned long long dp[1000001] = {0,1,2,4};
    std::vector<int> n;
    std::cin >> T;
    for (int i=0; i<T; i++)
    {
        std::cin >> input;
        n.push_back(input);
        if (max_n < input)
            max_n = input;
    }
    for (int i=4; i<=max_n; i++)
        dp[i] = (dp[i-1] +dp[i-2] +dp[i-3])%1000000009;
    for (int i=0; i<T; i++)
        std::cout << dp[n[i]] << '\n';
    return 0;
}
