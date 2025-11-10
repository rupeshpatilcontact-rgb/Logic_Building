#include<stdio.h>

int DollartoINR(int iNo)
{
    int INR = 0; 
    int rate = 70;

    INR = iNo * rate;

    return INR;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollartoINR(iValue);

    printf("Value in INR is :%d", iRet);

    return 0;
}