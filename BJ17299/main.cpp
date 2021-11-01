#include <iostream>
#include <stack>
#include <utility>
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
 
    std::stack<std::pair<int,int>> st;
    int N, arr[1000000], ans[1000000], count[1000001] = {0,};
    std::cin >> N;
    for (int i=0; i<N; i++)
    {
        std::cin >> arr[i];
        count[arr[i]]++;
    }
    for (int i=N-1; i>=0; i--)
    {
        while(!st.empty() && count[arr[i]] >= st.top().second)
            st.pop();
        ans[i] = st.empty()? -1 : st.top().first;
        st.push({arr[i], count[arr[i]]});
    }
    for (int i=0; i<N; i++)
        std::cout << ans[i] << ' ';
 
    return 0;
}
