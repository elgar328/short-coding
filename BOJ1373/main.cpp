#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str;
    std::cin >> str;
    while (str.length() % 3 != 0)
        str = '0' + str;

    int digit;
    for (int i=0; i<str.length(); i+=3)
    {
        digit = 0;
        if (str[i] == '1')
            digit += 4;
        if (str[i+1] == '1')
            digit += 2;
        if (str[i+2] == '1')
            digit ++;
        std::cout << digit;
    }
    return 0;
}
