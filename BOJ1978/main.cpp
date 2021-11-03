#include <iostream>

int main()
{
    int N, k, num = 0;
    std::cin >> N;

    while (N--)
    {
        std::cin >> k;
        int i;
        for (i=2; i<k; i++)
        {
            if (k % i ==0)
                break;
        }
        if (i == k)
            num++;
    }
    std::cout << num;
    return 0;
}
