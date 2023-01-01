#include <iostream>

int main()
{
    int n;
    int count = 1;
    std::cin >> n;

    for(int i = 1; i<n; i += (6*(count-1)))
    {
        count++;
    }

    std::cout << count;
    return 0;
}