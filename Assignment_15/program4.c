#include<stdio.h>

int MultiDigits(int iNo)
{
    int Multi = 1;
    int iDigit = 0;

    if( iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        Multi = Multi * iDigit;
        iNo = iNo / 10;
    }  
    return Multi;
}                 

int main()
{
     int iValue = 0;
     int iRet = 0;

     printf("Enter number\n");
     scanf("%d",&iValue);

     iRet = MultiDigits(iValue);

    printf("%d",iRet);

  return 0;
}
