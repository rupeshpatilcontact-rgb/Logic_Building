#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

     while(iCnt <= iNo)
     { 
        iFact = iFact * iCnt; 
        iCnt++;                
     }

    return iFact;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    if(iRet != -1)
    {
        printf("Factorial of %d is: %d\n", iValue, iRet);
    }

    return 0;
}