#include <iostream>
#include <string>
int main()
{
    int t = 0;
    std::cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n = 0;
        std::string s;
        std::string ans;
        std::cin >> n >> s;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans += s[i];
            }
        }
        std::cout << ans <<"\n";
    }
}
