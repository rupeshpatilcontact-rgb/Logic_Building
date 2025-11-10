#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float Area = 0.0;
    
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is : %0.04f",dRet);

    return 0;
}