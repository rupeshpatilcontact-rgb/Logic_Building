#include<stdio.h>

void Patten(int iNo)
{
    int iCnt = 0;

   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
        printf("$\t*\t",iCnt);
   }

   printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Patten(iValue);

    return 0;
}
