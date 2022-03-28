#include <iostream>
#include <math.h>
#include <string>

bool IsArithmeticSequence(int a)
{
    std::string num = std::to_string(a);
    int *arr = new int[num.length()];
    for (int i = 0; i < num.length(); i++)
    {
        arr[i] = a % 10;
        a /= 10;
    }
    for (int i = 2; i < num.length(); i++)
    {
        if (!(arr[0] - arr[1] == arr[i - 1] - arr[i]))
            return false;
    }
    delete[] arr;
    return true;
}
int main()
{
    int n = 0;
    int ans = 99;

    std::cin >> n;
    if (n >= 100)
    {
        for (int i = 100; i <= n; i++)
        {
            if (IsArithmeticSequence(i))
                ans++;
        }
    }
    else
    {
        ans = n;
    }

    std::cout << ans;
    return 0;
}
