#include <iostream>

long long five(long long n)
{
    long long ans = 0;
    for (long long i=5; i<=n; i*=5)
        ans += n/i;
    return ans;
}
long long two(long long n)
{
    long long ans = 0;
    for (long long i=2; i<=n; i*=2)
        ans += n/i;
    return ans;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long n, m;
    std::cin >> n >> m;

    long long five_ans = five(n)-five(m)-five(n-m);
    long long two_ans = two(n)-two(m)-two(n-m);
    std::cout << (five_ans > two_ans ? two_ans : five_ans);
    
    return 0;
}

