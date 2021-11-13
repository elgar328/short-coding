#include <iostream>
#include <unordered_map>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N, tmp;
    std::unordered_map<int,int> mycard;
    std::cin >> N;
    while (N--)
    {
        std::cin >> tmp;
        mycard[tmp]++;
    }
    std::cin >> N;
    while (N--)
    {
        std::cin >> tmp;
        std::cout << mycard[tmp] << ' ';
    }
    return 0;
}
