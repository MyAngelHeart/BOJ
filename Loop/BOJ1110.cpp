#include <iostream>
int main()
{
    int count = 0;
    int n = 0;
    int a = 100;
    int b = 0;
    std::cin >> n;

    if(n < 10)
    {
        n *= 10;
    }
    b = n;

    while(n != a)
    {
        a = b/10 + b%10;
        a %= 10;
        a += (b%10)*10;
        b = a;
        count++;
    }
    
    std::cout << count;
    return 0;
}