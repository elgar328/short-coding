#include <iostream>

int GCD(int a, int b)
{
    int tmp;
    if (a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    while (a % b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return b;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T, N, nums[100];
    std::cin >> T;
    while (T--)
    {
        long long sum = 0;
        std::cin >> N;
        for (int i=0; i<N; i++)
            std::cin >> nums[i];

        for (int i=0; i<N; i++)
        {
            for (int j=i+1; j<N; j++)
                sum += GCD(nums[i],nums[j]);
        }
        std::cout << sum << '\n';
    }
}

