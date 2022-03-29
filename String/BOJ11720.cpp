#include <iostream>
#include <string>
int main()
{
    int ans = 0;
    int a = 0;
    std::string num;
    std::cin >> a >> num;
    for(int i = 0; i<a; i++)
    {
        ans += (int)num[i]-48;
    }
    std::cout << ans;
    return 0;
}
