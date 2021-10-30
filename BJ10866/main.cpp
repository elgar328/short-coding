#include <iostream>
#include <deque>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, x;
    std::string cmd;
    std::deque<int> dq;
    std::cin >> N;
    while (N--)
    {
        std::cin >> cmd;
        if (cmd == "push_front")
        {
            std::cin >> x;
            dq.push_front(x);
        }
        else if (cmd == "push_back")
        {
            std::cin >> x;
            dq.push_back(x);
        }
        else if (cmd == "pop_front")
        {
            if (dq.empty()) std::cout << "-1\n";
            else
            {
                std::cout << dq.front() << '\n';;
                dq.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (dq.empty()) std::cout << "-1\n";
            else
            {
                std::cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (cmd == "size")
            std::cout << dq.size() << '\n';
        else if (cmd == "empty")
            std::cout << ((dq.empty())? 1 : 0) << '\n';
        else if (cmd == "front")
        {
            if (dq.empty()) std::cout << "-1\n";
            else std::cout << dq.front() << '\n';;
        }
        else if (cmd == "back")
        {
            if (dq.empty()) std::cout << "-1\n";
            else std::cout << dq.back() << '\n';;
        }
    }
}
