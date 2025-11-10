#include<stdio.h>

int KMtoMeter(int iNo)
{
   int  Meter = 0;

   if(iNo < 0)
   {
        iNo = -iNo;
   }

    Meter = iNo * 1000;

   return Meter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("KM to Meter is %d",iRet);

    return 0;
}