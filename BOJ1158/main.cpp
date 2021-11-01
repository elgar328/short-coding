#include <iostream>
#include <queue>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, K;
    std::cin >> N >> K;
    std::queue<int> que;
    for (int i=1; i<=N; i++)
       que.push(i);
    std::cout << '<';
    while(que.size() != 1)
    {
        for (int i=0; i<K-1; i++)
        {
            que.push(que.front());
            que.pop();
        }
        std::cout << que.front() << ", ";
        que.pop();
    }
    std::cout << que.front() << ">";

    return 0;
}
