#include <iostream>
#include <string>

int main()
{   
    std::string str;
    std::cin >> str;

    int count = 0;
    int index = 0;
    int max = str.length() -1;

    while(max >= index)
    {
        if(index+1 <= max)
        {
            if(str[index] == 'c' && str[index+1] == '=')
            {
                index += 2;
                count++;
                continue;
            }

            else if(str[index] == 'c' && str[index+1] == '-')
            {
                index += 2;
                count++;
                continue;
            }

            else if(str[index] == 'd' && str[index+1] == 'z')
            {
                if(index+2 <= max)
                {
                    if(str[index+2] == '=')
                    {
                        index += 3;
                        count++;
                        continue;                   
                    }
                }
            }

            else if(str[index] == 'd' && str[index+1] == '-')
            {
                index += 2;
                count++;
                continue;
            }

            else if(str[index] == 'l' && str[index+1] == 'j')
            {
                index += 2;
                count++;
                continue;    
            }

            else if(str[index] == 'n' && str[index+1] == 'j')
            {
                index += 2;
                count++;
                continue;    
            }

            else if(str[index] == 's' && str[index+1] == '=')
            {
                index += 2;
                count++;
                continue;    
            }

            else if(str[index] == 'z' && str[index+1] == '=')
            {
                index += 2;
                count++;
                continue;    
            }
        }

        index++;
        count++;
    }

    std::cout << count;

    return 0;
}
