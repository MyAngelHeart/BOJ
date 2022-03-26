#include <iostream>
#include <string>

int main()
{
    std::string a;
    std::cin >> a;
    std::cout << a << "??!" ; // 삼중자오류 C++17부터 제거된 항목

    return 0;
}