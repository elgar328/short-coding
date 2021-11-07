#include <iostream>

int main()
{
    int n, map[1001] = {0,1,2,};
    std::cin >> n;
    for (int i=3; i<=n; i++)
        map[i] = (map[i-1] + map[i-2]) % 10007;
    std::cout << map[n];
    return 0;
}
