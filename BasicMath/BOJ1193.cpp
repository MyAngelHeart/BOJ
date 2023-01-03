#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int i;
    int c = 1;
    int left = 1;
    int right = 1;

    for(i = 1; i<n; i+=c)
    {
        left++;
        c++;
    }

    if(c%2 == 0)
    {
        left -= (i-n);
        right += (i-n);
    }
    else
    {
        int tmp = 0;
        tmp = left;
        left = right;
        right = tmp;
        left += (i-n);
        right -= (i-n);
    }

    
    std::cout << left << "/" << right;    
    return 0;
}