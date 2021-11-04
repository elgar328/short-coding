#include <iostream>
#include <string>
#include <cmath>

int char2int(char x)
{
    if ('0' <= x && x <= '9')
        return x - '0';
    else
        return (x - 'A') + 10;
}

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int num = 0, base;
    std::string str;
    std::cin >> str >> base;

    for (int i=0; i<str.length(); i++)
    {
        num += (char2int(str[str.length()-1-i]) * std::pow(base,i));
    }
    std::cout << num;

    return 0;
}

