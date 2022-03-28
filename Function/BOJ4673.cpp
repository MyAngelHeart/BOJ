#include <iostream>
int SelfNumSequence(int a)
{    
    int tmpN = a;
    int nSelf = a;
    while(tmpN != 0)
    {
        nSelf += tmpN%10;
        tmpN /= 10;
    }
    return nSelf;
}
int main()
{
    bool isNotSelfNum[20000] = {false};
    int nCount = 1;

    while(nCount <= 10000)
    {
        if(!isNotSelfNum[nCount-1])
        {
            std::cout<< nCount << "\n";            
        }
        isNotSelfNum[SelfNumSequence(nCount)-1] = true;
        nCount++;        
    }
    return 0;
}