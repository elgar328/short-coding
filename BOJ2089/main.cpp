#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int num;
    std::cin >> num;
    std::string str;

    if (num == 0)
    {
        std::cout << 0;
        return 0;
    }
    while (num != 0)
    {
        if (num%-2 == 0)
        {
            str += '0';
            num = num/-2;
        }
        else
        {
            str += '1';
            num = (num-1)/-2;
        }
    }
    for (int i=str.length()-1; i>=0; i--)
        std::cout << str[i];

    return 0;
}
