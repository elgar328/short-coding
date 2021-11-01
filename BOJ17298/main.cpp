#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N, arr[1000000], ans[1000000];
    std::cin >> N;
    for (int i=0; i<N; i++)
        std::cin >> arr[i];

    std::stack<int> st;
    for (int i=N-1; i>=0; i--)
    {
        while (!st.empty() && arr[i]>=st.top())
            st.pop();
        if (st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }

    for (int i=0; i<N; i++)
        std::cout << ans[i] << ' ';

    return 0;
}
