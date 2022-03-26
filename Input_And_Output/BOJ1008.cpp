#include <stdio.h>
#include <iostream>
// https://www.acmicpc.net/blog/view/56 
// https://www.acmicpc.net/blog/view/57 

int main()
{
    double a;
    double b;

    std::cin >> a >> b;

    double c = a / b;

    std::cout.precision(9);
    std::cout << std::fixed;
    std::cout << c;

    return 0;
}