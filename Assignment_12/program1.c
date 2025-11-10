#include<stdio.h>

void print_factors(int number)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt) == 0)
        {
           printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int number;

    printf("Enter number\n");
    scanf("%d",&number);

    print_factors(number);

    return 0;
}