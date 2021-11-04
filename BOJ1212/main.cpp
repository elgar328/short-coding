#include <iostream>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string bin[8] = {"000","001","010","011","100","101","110","111"};
    std::string bin0[8] = {"0","1","10","11","100","101","110","111"};
    std::string str;
    std::cin >> str;

    int digit;
    digit = str[0] - '0';
    std::cout << bin0[digit];

    for (int i=1; i<str.length(); i++)
    {
        digit = str[i] - '0';
        std::cout << bin[digit];
    }
    return 0;
}
