#include <iostream>

int main()
{
    int sum = 0, num;
    for (int i=0; i<5; i++)
    {
        std::cin >> num;
        sum += num*num;
    }
    std::cout << sum % 10;

    return 0;
}
