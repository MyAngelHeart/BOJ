#include <stdio.h>
#include <iostream>
#include <algorithm>

int main()
{
    int numSubject = 0;
    float scoreAvg = 0;
    std::cin >> numSubject;

    float *subjectScore = new float[numSubject]();

    for(int n = 0; n<numSubject; n++)
    {
        std::cin >> subjectScore[n];
    }

    std::sort(subjectScore,subjectScore+numSubject);

    for(int i = 0; i<numSubject; i++)
    {
        subjectScore[i] = (subjectScore[i]/subjectScore[numSubject-1])*100;
    }

    for(int i = 0; i<numSubject; i++)
    {
        scoreAvg += subjectScore[i];
    }

    scoreAvg /= (float)numSubject;
    std::cout << scoreAvg;

    delete[] subjectScore; // 동적할당시 삭제 필수 메모리 누수방지
    return 0;
}

// 최고점도 포함해서 계산해줘야됬음 ㅎ;