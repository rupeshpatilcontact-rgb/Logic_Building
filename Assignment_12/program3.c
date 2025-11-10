#include<stdio.h>

void sum_of_factors(int number)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    printf("Sum of factors of %d is: %d\n",number,iSum);
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

   sum_of_factors(number);

    return 0;

}