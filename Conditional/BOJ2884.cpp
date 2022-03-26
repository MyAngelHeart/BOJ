#include <iostream>

int main()
{
    int h = 0;
    int m = 0;

    std::cin >> h;
    std::cin >> m;

    if(m >= 45)
        m -= 45;
    else if (h == 0)
    {
        m += 15;
        h = 23;
    }
    else
    {
        m += 15;
        h -= 1;
    }
    std::cout << h << " " << m;

    return 0;
}