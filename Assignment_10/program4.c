#include<stdio.h>

double FhtoCs(float fTemp)
{
   double Celsius = 0.0;

    Celsius =  (fTemp -32.0)* (5.0/9.0);

    return Celsius;
     
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Celsius is %0.04f",dRet);

    return 0;
}