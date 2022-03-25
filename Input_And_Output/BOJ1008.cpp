#include <stdio.h>
#include <iostream>
//입출력 속도에 대한 자료
// https://www.acmicpc.net/blog/view/56 입력
// https://www.acmicpc.net/blog/view/57 출력
//위 최적화시 C표준 명령어 사용시 에러날 가능 농후함

int main()
{
    double a;
    double b;

    std::cin >> a >> b;

    double c = a / b;

    std::cout.precision(9);
    std::cout << std::fixed; //고정소수점으로 표현 // 이거때문에 몇번 틀림
    std::cout << c;

    return 0;
}