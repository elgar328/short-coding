#include <iostream>

int main()
{
    int T, n, map[11] = {0,1,2,4,};
    for (int i=4; i<=10; i++)
        map[i] = map[i-1] + map[i-2] + map[i-3];
    std::cin >> T;
    while (T--)
    {
        std::cin >> n;
        std::cout << map[n] << '\n';
    }
    return 0;
}
