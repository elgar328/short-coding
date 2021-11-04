#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, i=2;
    std::cin>>N;
    while (i < N)
    {
        if (N%i == 0)
        {
            std::cout << i << "\n";
            N = N / i;
            i = 2;
        }
        else
            i++;
    }
    if (N != 1)
        std::cout<<N;
    return 0;
}
