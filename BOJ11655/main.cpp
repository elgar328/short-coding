#include <iostream>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    std::getline(std::cin, str);

    for (int i=0; i<str.length(); i++)
    {
        if ('A'<=str[i] && str[i]<='Z')
        {
            if (str[i]+13 >'Z')
                str[i] = str[i]-13;
            else
                str[i] = str[i]+13;
        }
        else if ('a'<=str[i] && str[i]<='z')
        {
            if (str[i]+13 >'z')
                str[i] = str[i]-13;
            else
                str[i] = str[i]+13;
        }
    }
    std::cout << str;
    return 0;
}



