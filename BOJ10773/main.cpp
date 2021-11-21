#include <iostream>
#include <stack>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int K, tmp;
    std::stack<int> st;
    std::cin >> K;
    while (K--)
    {
        std::cin >> tmp;
        if (tmp != 0)
            st.push(tmp);
        else
            st.pop();
    }
    unsigned int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    std::cout << sum;
    
    return 0;
}
