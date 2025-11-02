#include<stdio.h>

float Percentage(float fTotal, float fObtained)
{
    float fPercent = 0.0;

    if(fTotal <= 0)
    {
        printf("Invalid total marks\n");
        return 0.0;
    }

    fPercent = (fObtained / fTotal) * 100;
    return fPercent;
}

int main()
{
    float fTotal = 0.0, fObtained = 0.0;
    float fResult = 0.0;

    printf("Please enter total marks: ");
    scanf("%f", &fTotal);

    printf("Please enter obtained marks: ");
    scanf("%f", &fObtained);

    fResult = Percentage(fTotal, fObtained);

    printf("Your percentage is : %.2f%%\n", fResult);

    return 0;
}
