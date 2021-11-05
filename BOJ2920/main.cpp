#include <iostream>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    char char1, char2;
    std::cin >> char2;
    int asc = 0, desc = 0;
    for (int i=0; i<7; i++)
    {
        std::cin >> char1;
        if (char1 == char2 + 1)
            asc++;
        else if (char1 + 1 == char2)
            desc++;
        char2 = char1;
    }
    if (asc == 7)
        std::cout << "ascending";
    else if (desc == 7)
        std::cout << "descending";
    else
        std::cout << "mixed";

    return 0;
}
