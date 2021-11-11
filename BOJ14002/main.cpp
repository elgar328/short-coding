#include <iostream>
#include <stack>

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
    int max = 0, max_i;
    for (int i=1; i<=N; i++)
    {
        if (max < map[i])
        {
            max = map[i];
            max_i = i;
        }
    }
    std::cout << max << '\n';
    std::stack<int> lseq;
    lseq.push(seq[max_i]);
    for (int i=max_i; i>0; i--)
    {
        if (seq[i] < lseq.top() && map[i] == map[max_i]-1)
        {
            max_i = i;
            lseq.push(seq[max_i]);
        }
    }
    while (!lseq.empty())
    {
        std::cout << lseq.top() << ' ';
        lseq.pop();
    }
    return 0;
}
