#include <iostream>

int main()
{
    int stu[30] = {0,};

    for(int i = 0; i<28; i++)
    {
        int a;
        std::cin >> a;
        stu[a-1] = 1;
    }

   for(int i = 1; i<=30; i++)
   {
        if(stu[i-1] == 0)
        {
            std::cout << i << std::endl;
        }
   }

    return 0;
}
