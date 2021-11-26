#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str;
    while (true)
    {
        std::getline(std::cin, str);
        if (str.length() == 1 && str[0] == '.')
            break;
        std::stack<char> st;
        bool yes_flag = true;
        for (unsigned long int i=0; i<str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[')
                st.push(str[i]);
            else if (str[i] == ')' && !st.empty() && st.top() == '(')
                st.pop();
            else if (str[i] == ']' && !st.empty() && st.top() == '[')
                st.pop();
            else if (str[i] == ')' || str[i] == ']')
            {
                yes_flag = false;
                break;
            }
        }
        if (!st.empty())
            yes_flag = false;
        if (yes_flag)
            std::cout << "yes\n";
        else
            std::cout << "no\n";
    }
    return 0;
}
