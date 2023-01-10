#include <iostream>
#include <string>

int main()
{   
    int N;
    int Answer = 0;
    std::cin >> N;  

    while(N--)
    {
        bool isAnswerUp = true;
        int index = 0;
        int alpa[26] = {0,};
        std::string str;
        std::cin >> str;

        for(int length = str.length(); length > index; index++)
        {
            if(alpa[(int)str[index]-97] >= 1)
            {
                isAnswerUp = false;
                break;
            }
            alpa[(int)str[index]-97]++;
            for(int i = 1; str[index] == str[index + i];)
            {
                index++;
            }
        }
  
        if(isAnswerUp)
        {
            Answer++;
        }
    }

    std::cout << Answer;

    return 0;
}
