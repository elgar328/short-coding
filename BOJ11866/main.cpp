#include <iostream>
#include <deque>

int main()
{
    int N, K;
    std::cin >> N >> K;
    std::deque<int> deq;
    for (int i=1; i<=N; i++)
        deq.push_back(i);
    std::cout << '<';
    while (!deq.empty())
    {
        for (int i=0; i<K-1; i++)
        {
            deq.push_back(deq.front());
            deq.pop_front();
        }
        std::cout << deq.front();
        deq.pop_front();
        if (!deq.empty())
            std::cout << ", ";
    }
    std::cout << '>';

    return 0;
}
