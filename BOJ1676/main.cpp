#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int num, ans;
    std::cin >> num;
    ans = num/5 + num/25 + num/125;
    std::cout << ans;

    return 0;
}


