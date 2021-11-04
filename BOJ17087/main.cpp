#include <iostream>

int gcd(int a, int b)
{
    int tmp;
    if (a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    while (a % b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return b;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, S, A[100000];
    std::cin >> N >> S;
    for (int i=0; i<N; i++)
    {
        std::cin >> A[i];
        A[i] -= S;
        if (A[i] < 0)
            A[i] = -A[i];
    }

    int ans = A[0];
    for (int i=1; i<N; i++)
        ans = gcd(ans, A[i]);

    std::cout << ans;

    return 0;
}
