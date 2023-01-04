#include <iostream>

int main()
{
    int a;
    int b;
    int v;

    std::cin >> a >> b >> v;

    if(a >= v)
    {
        std::cout << "1";
        return 0;
    }

    int answer = 1;
    v -= a;
    if(v % (a-b) != 0)
    {
        answer++;
    }

    answer += v/(a-b);

    std::cout << answer;
    return 0;
}