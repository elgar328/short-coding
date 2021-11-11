#include <iostream>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, seq[100000], cum[100000], max;
    std::cin >> n;
    for (int i=0; i<n; i++)
        std::cin >> seq[i];
    cum[0] = seq[0];
    max = seq[0];
    for (int i=1; i<n; i++)
    {
        cum[i] = (seq[i] + cum[i-1] > seq[i])? seq[i] + cum[i-1] : seq[i];
        if (max < cum[i])
            max = cum[i];
    }
    std::cout << max;
    return 0;
}
