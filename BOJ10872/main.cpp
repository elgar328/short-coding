#include <iostream>

int factorial(int n)
{
    if (n==1)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    int n, out;
    std::cin >> n;
    if (n == 0)
        out = 1;
    else
        out = factorial(n);
    std::cout << out;
    return 0;
}
