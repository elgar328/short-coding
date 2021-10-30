#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N, m = 1, num;
    std::stack<int> st;
    std::string out;
    std::cin>>N;
    while(N--)
    {
        std::cin>>num;
        if (num >= m)
        {
            while (m <= num)
            {
                st.push(m++);
                out.push_back('+');
            }
            st.pop();
            out.push_back('-');
        }
        else
        {
            if (st.empty())
            {
                std::cout << "NO";
                return 0;
            }
            else if (num == st.top())
            {
                st.pop();
                out.push_back('-');
            }
            else
            {
                std::cout<<"NO";
                return 0;
            }
        }
    }
    for (int i=0; i<out.size(); i++)
        std::cout << out[i] << '\n';
    return 0;
}
