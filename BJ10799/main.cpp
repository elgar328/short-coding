#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int layers = 0, count = 0;
    std::string text;

    std::cin >> text;

    for (int i=0; i<text.size()-1; i++)
    {
        if (text[i]=='(' && text[i+1]==')')
        {
            count += layers;
            i++;
        }
        else if (text[i]=='(')
            layers++;
        else if (text[i]==')')
        {
            count ++;
            layers --;
        }

    }
    if (text[text.size()-1]==')' && text[text.size()-2]==')')
        count ++;

    std::cout << count;

    return 0;
}
