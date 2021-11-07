#include <iostream>

int main()
{
    int n, map[1000001] = {0,0,1,1,}, tmp;
    std::cin >> n;

    for (int i=4; i<=n; i++)
    {
        if (i % 3 == 0)
            map[i] = map[i / 3] + 1;
        if (i % 2 == 0)
        {
            tmp = map[i / 2] + 1;
            if (map[i] == 0)
                map[i] = tmp;
            else if (tmp < map[i])
                map[i] = tmp;
        }
        tmp = map[i-1] + 1;
        if (map[i] == 0)
            map[i] = tmp;
        else if (tmp < map[i])
            map[i] = tmp;
    }
    std::cout << map[n];
    return 0;
}
