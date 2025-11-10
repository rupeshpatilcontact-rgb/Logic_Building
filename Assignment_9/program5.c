#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int EvenFact = 1;
    int OddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
           EvenFact = EvenFact * iCnt;
        } 
        else
        {
            OddFact = OddFact * iCnt;  
        }
    }

    return EvenFact - OddFact;
   
}

int main()
{
    int iVlaue = 0; int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVlaue);

    iRet = OddFactorial(iVlaue);

    printf("Factorial Diffrent is %d",iRet);

    return 0;
}