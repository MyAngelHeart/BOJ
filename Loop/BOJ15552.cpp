#include <iostream>
int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int c = 0;
    std::cin >> c;

    for(int CaseNum = 0; CaseNum < c; CaseNum++)
    {
        int a = 0;
        int b = 0;
        std::cin >> a;
        std::cin >> b;

        std::cout << a+b << "\n";
    }
    return 0;
}