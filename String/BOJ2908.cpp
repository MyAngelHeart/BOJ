#include <iostream>
#include <string>
int main()
{
    std::string str;
    int a = 0;
    int b = 0;
    int tmp = 0;
    int ans = 0;

    std:: cin >> str;
    tmp = str[0];
    str[0] = str[2];
    str[2] = tmp;
    a = std::stoi(str);

    std:: cin >> str;
    tmp = str[0];
    str[0] = str[2];
    str[2] = tmp;
    b = std::stoi(str);
    
    ans = a > b ? a : b;
    std::cout << ans;
    return 0;
}
