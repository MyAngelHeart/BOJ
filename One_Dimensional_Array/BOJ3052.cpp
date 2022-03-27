#include <iostream>
int main()
{
    int a = 0;
    int b[42] = {};
    int c = 0;
    for(int i = 0; i<10; i++)
    {
        std::cin >> a;
        b[a%42]++;
    }
    for(int i = 0; i<42; i++)
    {
        if(b[i]>0) c++;
    }
    std::cout << c;

    return 0;
}
