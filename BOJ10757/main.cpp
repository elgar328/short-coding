#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    std::string str1,str2,result;
    std::cin>>str1>>str2;
    result = "";
    int len, num = 0;
    if (str1.length()>str2.length()) len = str1.length();
    else len = str2.length();

    for (int i=0; i<len; i++)
    {
        if (str1.length()!=0) 
        {
            num = num + std::atoi(&str1.back());
            str1.pop_back();
        }
        if (str2.length()!=0)
        {
            num = num + std::atoi(&str2.back());
            str2.pop_back();
        }
        result.insert(0,std::to_string(num%10));
        num = num/10;
    }
    if (num!=0) result.insert(0,std::to_string(num));

    std::cout<<result;
    return 0;
}
