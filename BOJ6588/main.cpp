#include <iostream>
#define NMAX 1000001

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int mesh[NMAX] = {1, 1, 0};
    for (int i=2; i*i<NMAX; i++)
    {
        if (mesh[i] == 0)
        {
            for (int j=2*i; j<NMAX; j+=i)
                mesh[j] = 1;
        }
    }

    int num, left, right;
    while (true)
    {
        std::cin >> num;
        if (num == 0)
            break;

        left = 3;
        right = num - 3;
        while (left <= right)
        {
            if (mesh[left]==0 && mesh[right]==0)
            {
                std::cout << num << " = " << left << " + " << right << '\n';
                break;
            }
            left += 2;
            right -= 2;
        }
    }
    return 0;
}
