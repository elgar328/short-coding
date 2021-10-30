#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string text;
    std::stack<char> st;
    std::getline(std::cin, text);
    text.push_back(' ');
    bool tag_flag = false;

    for (int i=0; i<text.size(); i++)
    {
        if (text[i] == '<')
        {
            while (!st.empty())
            {
                std::cout << st.top();
                st.pop();
            }
            tag_flag = true;
            std::cout << '<';
        }
        else if (text[i] == '>')
        {
            tag_flag = false;
            std::cout << '>';
        }
        else if (tag_flag)
        {
            std::cout << text[i];
        }
        else if (!tag_flag && text[i] != ' ')
        {
            st.push(text[i]);
        }
        else if (!tag_flag && text[i] == ' ')
        {
            while (!st.empty())
            {
                std::cout << st.top();
                st.pop();
            }
            std::cout << ' ';
        }
    }
    return 0;
}
