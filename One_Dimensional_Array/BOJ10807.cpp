#include <iostream>

int main()
{
    int ary[201] = {0,};
    int N, E, v;
    std::cin >> N;

    while(N--)
    {
        std::cin >> E;
        ary[E+100]++;
    }

    std::cin >> v;
    std::cout << ary[v+100];

    return 0;
}
