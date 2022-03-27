#include <iostream>
int main()
{
    int a = 0;
    int index = 0;
    int max = -1;
    for(int i =1; i<=9;i++)
    {
        std::cin >> a;
        if(max < a)
        {
            max = a;
            index = i;
        }
    }
    std::cout << max << "\n" << index;
    return 0;
}