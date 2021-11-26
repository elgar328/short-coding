#include <iostream>

#define INF 2000000000
#define TADD 1
#define TDEL 2
#define MAX 500
int N, M, B, mat[MAX][MAX];

int estimate(int level)
{
    int time = 0;
    int added_block = 0;
    int removed_block = 0;
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            if (mat[i][j] > level)
            {
                time += (mat[i][j] - level)*TDEL;
                removed_block += mat[i][j] - level;
            }
            else if (mat[i][j] < level)
            {
                time += (level - mat[i][j])*TADD;
                added_block += level - mat[i][j];
            }

        }
    }
    if (added_block > B + removed_block)
        return -1;
    else
        return time;
}

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::cin >> N >> M >> B;
    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++)
            std::cin >> mat[i][j];
    int level = 0, time, min_time = INF, at_level;
    while (true)
    {
        time = estimate(level);
        if (time < 0)
            break;
        else if (time <= min_time)
        {
            min_time = time;
            at_level = level;
        }
        level++;
    }
    std::cout << min_time << ' ' << at_level;
    return 0;
}
