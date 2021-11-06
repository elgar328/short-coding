#include <iostream>
#include <set>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, tmp;
    std::set<int> s;
    std::cin >> n;
    for (int i=0; i<n; i++)
    {
        std::cin >> tmp;
        s.insert(tmp);
    }
    std::cin >> m;
    for (int i=0; i<m; i++)
    {
        std::cin >> tmp;
        if (s.find(tmp) != s.end())
            std::cout << "1\n";
        else
            std::cout << "0\n";
    }
    return 0;
}
