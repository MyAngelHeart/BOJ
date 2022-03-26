#include <iostream>
int main()
{
    int n = 0;
    int result = 0;
    std::cin >> n;

    for(int i = 1; i<=n/2; i++)
    {
        result += i;
        result += n-i+1;
    }
    if(n%2 == 1)
    {
        result += n/2+1;
    }
    
    std::cout << result;
    return 0;
}