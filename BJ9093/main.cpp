#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int T;
    std::string line;
    std::stack<char> st;

    std::cin>>T;
    std::cin.ignore();
    while(T--)
    {
        std::getline(std::cin, line);
        line += ' ';
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] == ' ')
            {
                while (!st.empty())
                {
                    std::cout<<st.top();
                    st.pop();
                }
                std::cout << ' ';
            }
            else
                st.push(line[i]);
        }
        std::cout << '\n';
    }
    return 0;
}
