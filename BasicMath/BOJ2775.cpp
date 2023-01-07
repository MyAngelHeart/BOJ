#include <iostream>

int main()
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int k, n;
        std::cin >> k >> n;

            int kn[n];

            for(int i = 0; i<n; i++)
            {
                kn[i] = i+1;
            }

            for(int i = 0; i<k; i++)
            {
                for(int j = 1; j<n; j++)
                {
                    kn[j] += kn[j-1];
                }
            }

        std::cout << kn[n-1] << std::endl;
    }
    return 0;
}