#include <iostream>
int main()
{
    int a = 0;
    int b = 0;

    while(!(std::cin >> a >> b).eof())
    {
        std::cout << a + b << std::endl;
    }

    return 0;
}
//https://st-lab.tistory.com/257 //EOF에 관한 이야기