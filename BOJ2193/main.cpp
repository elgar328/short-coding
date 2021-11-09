#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    long long map[91][2] ={{0}};
    map[1][1] = 1;
    for (int i=2; i<=N; i++)
    {
        map[i][0] = map[i-1][1] + map[i-1][0];
        map[i][1] = map[i-1][0];
    }
    std::cout << map[N][0] + map[N][1];
    return 0;
}
