#include <iostream>

int main()
{
    int L, M = 1234567891;
    unsigned long long H = 0, r = 1;
    char c;
    std::cin >> L;
    for (int i=0; i<L; i++)
    {
        std::cin >> c;
        H += (c-'a'+1)*r;
        H %= M;
        r *= 31;
        r %= M;
    }
    std::cout << H;
    return 0;
}
