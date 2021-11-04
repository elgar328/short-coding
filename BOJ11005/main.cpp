#include <iostream>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int num, base;
    std::cin >> num >> base;

    int mod;
    char tmp;
    std::string str;
    while (num!=0)
    {
        mod = num % base;
        if (mod < 10)
        {
            tmp = mod + '0';
            str = str + tmp;
        }
        else
        {
            tmp = (mod - 10) + 'A';
            str = str + tmp;
        }
        num = num / base;
    }
    for (int i=str.length()-1; i>=0; i--)
        std::cout << str[i];

    return 0;
}
