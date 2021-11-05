#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str, ans;
    while (true)
    {

        std::cin >> str;
        if (str == "0")
            break;

        ans = "yes";
        for (int i=0; i<str.length()/2; i++)
        {
            if (str[i] != str[str.length()-1-i])
            {
                ans = "no";
                break;
            }
        }
        std::cout << ans << '\n';
    }
    return 0;
}
