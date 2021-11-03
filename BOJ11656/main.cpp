#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str;
    std::cin >> str;
    std::vector<std::string> v;
    for (int i=0; i<str.length(); i++)
        v.push_back(str.substr(i,str.length()));
    std::sort(v.begin(),v.end());
    for (int i=0; i<v.size(); i++)
        std::cout << v[i] << '\n';
    return 0;
}

