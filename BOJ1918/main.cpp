#include <iostream>
#include <stack>
#include <string>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string infix;
    std::cin >> infix;
    std::stack<char> st;
    
    std::map<char, int> preced;
    preced['+'] = 1;
    preced['-'] = 1;
    preced['*'] = 2;
    preced['/'] = 2;

    for (int i=0; i<infix.length(); i++)
    {
        if (infix[i]=='(')
            st.push('(');
        else if (infix[i]==')')
        {
            while (!st.empty() && st.top()!='(')
            {
                std::cout << st.top();
                st.pop();
            }
            st.pop();
        }
        else if (preced.find(infix[i])!=preced.end())
        {
            while (!st.empty() && preced[infix[i]] <= preced[st.top()])
            {
                std::cout << st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
        else
            std::cout << infix[i];
    }
    while (!st.empty())
    {
        std::cout << st.top();
        st.pop();
    }

    return 0;
}
