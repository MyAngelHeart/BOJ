#include <iostream>

int main()
{
    int a[6];
    int b[6] = {1, 1, 2, 2, 2, 8};

    for(int i = 0; i<6; i++)
    {
        std::cin >> a[i];
        b[i] -= a[i];
        std::cout << b[i] << " ";
    }



    return 0;
}