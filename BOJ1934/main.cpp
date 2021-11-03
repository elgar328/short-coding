#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, a, b, c, d, e;
    std::cin >> N;
    while (N--)
    {
        std::cin >> a >> b;
        c = a>b? a : b;
        d = a>b? b : a;

        while (c % d != 0)
        {
            e = c % d;
            c = d;
            d = e;
        }
        std::cout << a*b/d << '\n';
    }

    return 0;
}


