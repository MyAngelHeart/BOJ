#include <stdio.h>
#include <iostream>
#include <cmath>

int main()
{
    int numCase = 0;
    float scoreAvg = 0;
    int countUpperAvg = 0;
    std::cin >> numCase;

    for (int n = 0; n < numCase; n++)
    {
        int numStudent = 0;
        std::cin >> numStudent;

        int *subjectScore = new int[numStudent]();
        for (int i = 0; i < numStudent; i++)
        {
            std::cin >> subjectScore[i];
            scoreAvg += subjectScore[i];
        }
        scoreAvg /= (float)numStudent;
        for (int i = 0; i < numStudent; i++)
        {
            if (subjectScore[i] > scoreAvg)
                countUpperAvg++;
        }

        float avgUpperAvg = (float)countUpperAvg / (float)numStudent * (float)100;
        avgUpperAvg = round(avgUpperAvg*1000)/1000;

        std::cout.precision(3);
        std::cout << std::fixed;
        std::cout << avgUpperAvg;

        delete subjectScore;
    }
    return 0;
}