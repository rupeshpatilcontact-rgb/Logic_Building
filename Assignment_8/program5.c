#include<stdio.h>

int Factorial(int iNo)
{

    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt * iNo);
    }  
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    return 0;
}