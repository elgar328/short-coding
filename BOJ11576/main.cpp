#include <iostream>
#include <stack>
#include <string>
#include <cmath>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int num1[25];
    int base1, n, base2, num = 0;
    std::cin >> base1 >> base2 >> n;
    for (int i=0; i<n; i++)
        std::cin >> num1[i];
 
    for (int i=0; i<n; i++)
        num += num1[n-1-i]*std::pow(base1,i);

    std::stack<int> st;
    while (num != 0)
    {
        st.push(num % base2);
        num = num/base2;
    }
    while (!st.empty())
    {
        std::cout << st.top() << ' ';
        st.pop();
    }
    return 0;
}
