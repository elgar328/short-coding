#include <iostream>
#include <queue>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, x;
    std::string cmd;
    std::queue<int> que;
    std::cin >> N;
    while(N--)
    {
        std::cin >> cmd;
        if (cmd == "push")
        {
            std::cin >> x;
            que.push(x);
        }
        else if (cmd == "pop")
        {
            if (que.empty()) std::cout << -1 << '\n';
            else
            {
                std::cout << que.front() << '\n';
                que.pop();
            }
        }
        else if (cmd == "size")
            std::cout << que.size() << '\n';
        else if (cmd == "empty")
            std::cout << ((que.empty())? 1 : 0) << '\n';
        else if (cmd == "front")
        {
            if (que.empty()) std::cout << -1 << '\n';
            else std::cout << que.front() << '\n';
        }
        else if (cmd == "back")
        {
            if (que.empty()) std::cout << -1 << '\n';
            else std::cout << que.back() << '\n';
        }
    }
}
