#include <iostream>
#include <algorithm>
#include <string>
char solution(std::string s)
{
    int tmp[26] = {};
    int index = 0;
    bool isSame = false;
    for(int i = 0; i<s.length(); i++)
    {
        tmp[s[i]-65]++;
    }
    for(int i = 1; i<26; i++)
    {
        if(tmp[i] >= tmp[index])
        {            
            isSame = false; 
            if(tmp[i] == tmp[index])
            {
                isSame = true;
            }
            index = i;
        }
    }
    if(isSame)
        return '?';
    return (char)index+65;
}

int main()
{
    std::string s;
    std::cin >> s;
    std::transform(s.begin(), s.end(),s.begin(), ::toupper);

    char ans = '?';

    ans = solution(s);

    std::cout << ans;    
}
