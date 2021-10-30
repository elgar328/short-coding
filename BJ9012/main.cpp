#include <iostream>
#include <stack>
#include <string>

bool vps_check(std::string & line)
{
    std::stack<char> st;
    for (int i=0; i<line.size(); i++)
    {
        if (line[i] == '(')
            st.push('(');
        else
        {
            if (st.empty()) return false;
            else
            {
                if (st.top() != '(') return false;
                else
                {
                    st.pop();
                }
            }
        }
    }
    if (st.empty()) return true;
    else return false;
}

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int T;
    std::string line;

    std::cin>>T;
    std::cin.ignore();
    while(T--)
    {
        std::getline(std::cin, line);
        if (vps_check(line)) std::cout << "YES" << '\n';
        else std::cout << "NO" << '\n';
    }
    return 0;
}

