#include <iostream>
#include <algorithm>

int main()
{
    int a[3];

    std::cin >> a[0];
    std::cin >> a[1];
    std::cin >> a[2];

    std::sort(a,a+3);

    if(a[0] == a[1] && a[1] == a[2]) std::cout << 10000 + a[0] * 1000;
    else if(a[0] == a[1]) std::cout << 1000 + a[0] * 100;
    else if(a[1] == a[2]) std::cout << 1000 + a[1] * 100;
    else if(a[0] == a[2]) std::cout << 1000 + a[2] * 100;
    else std::cout << a[2] * 100;

    return 0;
}