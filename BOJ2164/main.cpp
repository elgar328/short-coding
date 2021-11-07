#include <iostream>
#include <queue>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;
    std::queue<int> d;
    for (int i=1; i<=n; i++)
        d.push(i);

    while (d.size() != 1)
    {
        d.pop();
        d.push(d.front());
        d.pop();
    }
    std::cout << d.front();
    return 0;
}
