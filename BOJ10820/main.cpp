#include <iostream>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    while (std::getline(std::cin, str))
    {
        int count[4] = {0,};
        for (int i=0; i<str.length(); i++)
        {
            if (str[i]==' ')
                count[3]++;
            else if ('a'<=str[i] &&str[i]<='z')
                count[0]++;
            else if ('A'<=str[i] &&str[i]<='Z')
                count[1]++;
            else if ('0'<=str[i] &&str[i]<='9')
                count[2]++;
        }
        std::cout << count[0] << ' ' << count[1] << ' ' << count[2] << ' ' << count[3] << '\n';
    }
    return 0;
}


