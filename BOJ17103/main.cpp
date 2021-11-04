#include <iostream>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T, n[100], max_n = 0;
    std::cin >> T;
    for (int i=0; i<T; i++)
    {
        std::cin >> n[i];
        if (max_n < n[i])
            max_n = n[i];
    }

    int prime[1000001] = {1,1,0,};
    for (int i=2; i*i<=max_n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j=2*i; j<=max_n; j+=i)
                prime[j] = 1;
        }
    }
    
    int counter;
    for (int i=0; i<T; i++)
    {
        counter = 0;
        for (int j=2; j<=n[i]/2; j++)
        {
            if (prime[j]==0 && prime[n[i]-j]==0)
                counter++;
        }
        std::cout << counter << '\n';
    }

    return 0;
}
