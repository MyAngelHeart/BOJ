#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int five = n / 5;
    int three = n % 5;

    while(five != 0 && three % 3 != 0)
    {
        three +=5;
        five--;
    }

    if(five == 0 && three % 3 != 0)
    {
        std::cout << "-1" << std::endl;
        return 0;
    }

    three = three / 3;

    std::cout << five+three << std::endl;

    return 0;
}