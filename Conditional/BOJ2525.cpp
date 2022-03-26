#include <iostream>

int main()
{
    int h = 0;
    int m = 0;
    int t = 0;

    std::cin >> h;
    std::cin >> m;
    std::cin >> t;

    m += t;

    while(m >= 60)
    {
        h += 1;
        m -= 60;
    }
    if(h >= 24)
    {
        h -= 24;
    }

    std::cout << h << " " << m;

    return 0;
}