#include<stdio.h>

double SquareMeter(float fValue)
{
    double dSquareMeter = 0.0;

    if(fValue < 0)
    {
        fValue = -fValue;
    }

    dSquareMeter  = fValue * 0.0929;

    return dSquareMeter;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Square Meter is %f",dRet);

    return 0;
}