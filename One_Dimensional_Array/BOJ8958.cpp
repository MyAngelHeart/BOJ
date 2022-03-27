#include <iostream>
#include <string>
int main()
{
    int c = 0;
    std::cin >> c;
    for(int nCase = 0; nCase<c; nCase++)
    {
        int count = 0;
        int score = 0;
        std::string a;
        std::cin >> a;

        for(int i = 0; i<a.length();i++)
        {
            if(a[i] == 'O')
            {
                count++;
                score += count;
            }
            else
            {
                count = 0;
            }
        }
        std::cout << score << "\n";
    }
    return 0;
}
