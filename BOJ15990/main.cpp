#include <iostream>

int main()
{
    int T, n, map[100000][3] = {{0}};
    map[0][0] = 1; map[1][1] = 1;
    map[2][0] = 1; map[2][1] = 1; map[2][2] = 1;
    for (int i=3; i<100000; i++)
    {
        map[i][0] = map[i-1][1] + map[i-1][2];
        map[i][1] = map[i-2][0] + map[i-2][2];
        map[i][2] = map[i-3][0] + map[i-3][1];
        for (int j=0; j<3; j++)
        {
            if (map[i][j] > 1000000009)
                map[i][j] = map[i][j] % 1000000009;
        }
    }
    std::cin >> T;
    int ans;
    while (T--)
    {
        std::cin >> n;
        ans = 0;
        for (int i=0; i<3; i++)
        {
            ans += map[n-1][i];
            if (ans > 1000000009)
                ans = ans % 1000000009;
        }
        std::cout << ans << '\n';
    }
    return 0;
}

