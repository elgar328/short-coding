#include <iostream>

int main()
{
    int N, seq[1001], map[1001] = {0,1,};
    std::cin >> N;
    for (int i=1; i<=N; i++)
        std::cin >> seq[i];
    for (int i=2; i<=N; i++)
    {
        map[i] = 1;
        for (int j=1; j<i; j++)
        {
            if (seq[j] < seq[i] && map[j] + 1 > map[i])
                map[i] = map[j] + 1;
        }
    }
    int max = 0;
    for (int i=1; i<=N; i++)
    {
        if (max < map[i])
            max = map[i];
    }
    std::cout << max;
    return 0;
}
