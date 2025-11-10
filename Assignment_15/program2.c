#include<stdio.h>

int CountOdd(int iNo)
{
   int Odd = 0;
   int iDigit = 0;

   if(iNo < 0)
   {
     iNo = -iNo;
   }

   while(iNo != 0)
   {
        iDigit = iNo % 10;       
        if((iDigit % 2) == 1)   
        {
            Odd++;             
        }
        iNo = iNo / 10;         
    }   

   return Odd;  
}                 

int main()
{
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter number: ");
  scanf("%d",&iValue);

  iRet = CountOdd(iValue);

  printf("Count of odd digits in %d is: %d\n", iValue, iRet);

  return 0;
}
