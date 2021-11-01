#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N, num;
    std::string cmd;
    std::cin>>N;
    std::stack<int> s;
    for (int i=0; i<N; i++)
    {
        std::cin>>cmd;
        if (cmd == "push")
        {
            std::cin>>num;
            s.push(num);
        }
        else if (cmd == "pop")
        {
            if (s.empty()) std::cout<<-1<<'\n';
            else 
            {
                std::cout<<s.top()<<'\n';
                s.pop();
            }
        }
        else if (cmd == "size")
        {
            std::cout<<s.size()<<'\n';
        }
        else if (cmd == "empty")
        {
            if (s.empty()) std::cout<<1<<'\n';
            else std::cout<<0<<'\n';
        }
        else if (cmd == "top")
        {
            if (s.empty()) std::cout<<-1<<'\n';
            else std::cout<<s.top()<<'\n';
        }
    }
    return 0;
}
