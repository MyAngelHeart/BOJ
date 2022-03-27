#include <iostream>
int main()
{
    int n = 0;
    int a = 0;
    int min = 1000001;
    int max = -1000001;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        min = min > a ? a : min;
        max = max < a ? a : max;
    }
    std::cout << min << " " << max;
    return 0;
}