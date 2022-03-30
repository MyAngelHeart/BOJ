#include <iostream>
#include <string>
int main()
{
    std::string s;
    int count = 0;
    while(true)
    {
        std::cin >> s;
        if(std::cin.eof() == true) break;
        count++;
    }

    std::cout << count;    
}
