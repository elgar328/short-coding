#include <iostream>

int main()
{
    int M, N;
    std::cin>>M>>N;
    
    bool mesh[1000000];
    for (int i=1; i<1000000; i++)
        mesh[i] = true;

    for (int i=2; i<=N; i++)
    {
        if (mesh[i] == true)
        {
            for (int j=2*i; j<=N; j+=i)
                mesh[j] = false;
            if (i>=M)
                std::cout << i << '\n';
        }
    }
    return 0;
}
