#include <iostream>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, k;
    std::cin >> n >> k;
    if (k <= n)
        std::cout << factorial(n)/(factorial(k)*factorial(n-k));
    else
        std::cout << 0;

    return 0;
}
