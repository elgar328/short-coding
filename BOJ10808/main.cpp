#include <iostream>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    std::cin >> str;

    int count[26] = {0,};
    for (int i=0; i<str.length(); i++)
    {
        count[str[i]-'a']++;
    }
    for (int i=0; i<26; i++)
        std::cout << count[i] << ' ';
    return 0;
}

