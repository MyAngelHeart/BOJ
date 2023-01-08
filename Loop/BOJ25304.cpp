#include <iostream>

int main()
{
    int X, N, C = 0;
    std::cin >> X >> N;
    while(N--)
    {
        int a, b;
        std::cin >> a >> b;
        C += a * b;
    }

    if(C == X)
    {
        std::cout << "Yes";
        return 0;
    }
    std::cout << "No";

    return 0;
}