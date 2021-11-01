#include <iostream>
#include <string>
#include <stack>
int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::string text;
    int N;
    std::stack<char> front, back;
    char x;
    std::cin >> text;
    for (int i=0; i<text.size(); i++) front.push(text[i]);
    std::cin >> N;
    while(N--)
    {
        std::cin >> x;
        if (x == 'L')
        {
            if (!front.empty())
            {
                back.push(front.top());
                front.pop();
            }
        }
        else if (x == 'D')
        {
            if (!back.empty())
            {
                front.push(back.top());
                back.pop();
            }
        }
        else if (x == 'B')
        {
            if (!front.empty()) front.pop();
        }
        else if (x == 'P')
        {
            std::cin >> x;
            front.push(x);
        }
    }
    while (!front.empty())
    {
        back.push(front.top());
        front.pop();
    }
    while (!back.empty())
    {
        std::cout << back.top();
        back.pop();
    }
    return 0;
}
