#include <iostream>
int main()
{
    int c = 0;
    std::cin >> c;

    for(int CaseNum = 0; CaseNum < c; CaseNum++)
    {
        int a = 0;
        int b = 0;
        std::cin >> a;
        std::cin >> b;

        std::cout << "Case #" << CaseNum+1 << ": " << a+b << std::endl;
    }
    return 0;
}