#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt ;
        }  
    }

    return iFact;
   
}

int main()
{
    int iVlaue = 0; int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVlaue);

    iRet = OddFactorial(iVlaue);

    printf("Odd Factors of number is %d",iRet);

    return 0;
}