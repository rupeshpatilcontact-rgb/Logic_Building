#include<stdio.h>

void DisplayDigits(int iNo)
{
    int Digit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        printf("%d\n",Digit);
        Digit++;
        iNo = iNo / 10;
    }
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
   
    return 0;
}
