#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a;
    std::cin >> b;

    c = a - b;

    if(c > 0) std::cout << ">";
    else if(c < 0) std::cout << "<";
    else std::cout << "==";

    return 0;
}