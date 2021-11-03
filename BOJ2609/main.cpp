#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int a, b;
    std::cin >> a >> b;

    int c, d, e;
    c = a>b? a : b;
    d = a>b? b : a;

    while (c % d != 0)
    {
        e = c % d;
        c = d;
        d = e;
    }
    std::cout << d << '\n';
    std::cout << a*b/d;

    return 0;
}

