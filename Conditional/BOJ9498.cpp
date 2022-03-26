#include <iostream>

int main()
{
    int a = 0;

    std::cin >> a;

    if(a < 60) std::cout << "F";
    else if(a < 70) std::cout << "D";
    else if(a < 80) std::cout << "C";
    else if(a < 90) std::cout << "B";
    else std::cout << "A";

    return 0;
}