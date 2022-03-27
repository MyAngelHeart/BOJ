#include <iostream>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    int sum = a*b*c;

    int *num = new int[10]();

    while(sum != 0)
    {
        num[sum%10]++;
        sum /= 10;
    }

    for(int i = 0; i <10; i++)
    {
        std::cout << num[i] << "\n";
    }

    delete[] num;

    return 0;
}
