#include <iostream>
int main()
{
    int n = 0;
    int x = 0;
    int a = 0;
    std::cin >> n;
    std::cin >> x;

    for(int i = 0; i < n; i++)
    {
        std::cin >> a;
        if(a < x)
        {
            std::cout << a << " ";
        }
    }

    return 0;
}