#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, rgb[3], dp[3], dp_new[3], min;
    std::cin >> N;
    std::cin >> rgb[0] >> rgb[1] >> rgb[2];
    for (int i=0; i<3; i++)
        dp[i] = rgb[i];
    N--;
    while (N--)
    {
        std::cin >> rgb[0] >> rgb[1] >> rgb[2];
        dp_new[0] = ((dp[1] < dp[2])? dp[1] : dp[2]) + rgb[0];
        dp_new[1] = ((dp[0] < dp[2])? dp[0] : dp[2]) + rgb[1];
        dp_new[2] = ((dp[0] < dp[1])? dp[0] : dp[1]) + rgb[2];
        for (int i=0; i<3; i++)
            dp[i] = dp_new[i];
    }
    min = dp[0];
    for (int i=1; i<3; i++)
        if (dp[i] < min)
            min = dp[i];
    std::cout << min;
    return 0;
}

