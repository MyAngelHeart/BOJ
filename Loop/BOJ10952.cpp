#include <iostream>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    while(true)
    {
        std::cin >> a;
        std::cin >> b;
        c = a + b;
        if(c==0) break;
        std::cout << c << std::endl;      
    }

    return 0;
}