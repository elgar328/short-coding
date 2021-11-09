#include <iostream>

int main()
{
    int ld[10] = {0,1,1,1,1,1,1,1,1,1}, tmp[10], N;
    std::cin >> N;
    for (int i=2; i<=N; i++)
    {
        for (int j=0; j<9; j++)
            tmp[j] = ld[j+1];
        tmp[9] = 0;
        for (int j=1; j<10; j++)
            tmp[j] += ld[j-1];
        for (int j=0; j<10; j++)
        {
            ld[j] = tmp[j];
            if (ld[j] > 1000000000)
                ld[j] = ld[j] % 1000000000;
        }
    }
    int sum = 0;
    for (int i=0; i<10; i++)
    {
        sum += ld[i];
        if (sum > 1000000000)
            sum = sum % 1000000000;
    }
    std::cout << sum;
    return 0;
}
