#include <iostream>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    std::cin >> str;

    int count[26];
    for (int i=0; i<26; i++)
        count[i] = -1;
    for (int i=0; i<str.length(); i++)
    {
        if (count[str[i]-'a'] == -1)
            count[str[i]-'a'] = i;
    }
    for (int i=0; i<26; i++)
        std::cout << count[i] << ' ';
    return 0;
}

