#include <iostream>
#include <string>
int main()
{
    std::string str[8]= {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    std::string s;
    std::cin >> s;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int h = 0; h < str[j].length(); h++)
            {
                if (s[i] == str[j][h])
                {
                    count += j+3;
                }
            }
        }
    }

    std::cout << count;
}
