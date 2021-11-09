#include <iostream>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int p[1001], price[1001]={0,}, N;
    std::cin >> N;
    for (int i=1; i<=N; i++)
        std::cin >> p[i];
    for (int i=1; i<=N; i++)
    {
        price[i] = p[i];
        for (int j=i-1; j>=i-j; j--)
        {
            if (price[i] > price[j] + price[i-j])
                price[i] = price[j] + price[i-j];
        }
    }
    std::cout << price[N];
    return 0;
}

