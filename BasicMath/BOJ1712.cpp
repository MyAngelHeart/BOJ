#include <iostream>

int main()
{
    int A;
    int B;
    int C;
    int count = 0;
    int64_t sum = 0;

    std::cin >> A >> B >> C;

    if(B >= C)
    {
        std::cout << "-1";
        return 0;
    }

    count = A / (C-B);
    count++;

    std::cout << count;

    return 0;
}