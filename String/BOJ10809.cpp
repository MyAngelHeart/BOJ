#include <iostream>
#include <string>
int main()
{
    int arr[26];
    std::fill_n(arr,26,-1);
    std::string s;
    std::cin >> s;
    for(int i = 0; i<s.length(); i++)
    {
        if(arr[(int)s[i]-97] == -1)
        {
            arr[(int)s[i]-97] = i;
        }
    }
    for(int i = 0; i<26; i++)
    {
        std::cout << arr[i] << " " ;
    }
}
