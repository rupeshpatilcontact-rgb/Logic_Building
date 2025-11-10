#include<stdio.h>

void count_factors(int number)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            iCount++;
        }
    }
    printf("Count of factors of %d is: %d\n",number,iCount);
}

int main()
{
    int number;

    printf("Enter number\n");
    scanf("%d",&number);

   count_factors(number);

    return 0;

}