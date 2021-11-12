#include <iostream>

int main()
{
    int N, map[100001];
    std::cin >> N;
    for (int i=0; i<=N; i++)
        map[i] = i;
    for (int i=4; i<=N; i++)
    {
        for (int j=2; j*j<=i; j++)
        {
            if (map[i-j*j]+1 < map[i])
                map[i] = map[i-j*j]+1;
        }
    }
    std::cout << map[N];
    return 0;
}
