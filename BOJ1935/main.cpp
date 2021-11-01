#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin >> N;

    std::string str;
    std::cin >> str;

    std::stack<double> num_st;

    int operand[26];
    for (int i=0; i<N; i++)
        std::cin >> operand[i];

    double numa, numb;
    for (int i=0; i<str.size(); i++)
    {
        if (str[i]=='*' || str[i]=='/' || str[i]=='+' || str[i]=='-')
        {
            numb = num_st.top();
            num_st.pop();
            numa = num_st.top();
            num_st.pop();
            switch (str[i])
            {
                case '*':
                    num_st.push(numa*numb);
                    break;
                case '/':
                    num_st.push(numa/numb);
                    break;
                case '+':
                    num_st.push(numa+numb);
                    break;
                case '-':
                    num_st.push(numa-numb);
                    break;
            }
        }
        else
            num_st.push((double)operand[str[i]-'A']);
    }
    std::cout.precision(2);
    std::cout << std::fixed << num_st.top();

    return 0;
}
