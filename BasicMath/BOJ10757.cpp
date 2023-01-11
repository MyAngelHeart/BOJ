#include <iostream>
#include <string>

int main()
{   
    std::string str1, str2, answer;
    std::cin >> str1 >> str2;

    int str1len = str1.length();
    int str2len = str2.length();

    char arr[10000] = {0,};

    for(int i = 0; i<str1len && i<str2len; i++)
    {
        std::cout << "t";
        char carry = 0;
        char sum = 0;

        sum = (int)str1[i]-48 + (int)str2[i]-48 + arr[i];

        if(sum >= 10)
        {
            sum -= 10;
            carry = 1;
        }

        arr[i] = sum;
        arr[i+1] = carry;
    }

    for(int i = 0; i<str1len && i<str2len; i++)
    {
        std::cout << arr[i] << "x";
        answer.push_back(arr[i]);
    }

    std::cout << answer;

    return 0;
}
