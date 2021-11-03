#include <iostream>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    a += b;
    c += d;
    long long A = std::stoll(a);
    long long C = std::stoll(c);
    std::cout << A+C;
    return 0;
}



