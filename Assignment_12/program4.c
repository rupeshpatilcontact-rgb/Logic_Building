#include<stdio.h>

void SumOfEvenFactors(int number)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if((number % 2) == 0 && (iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    printf("Sum of even factors of %d is : %d\n", number, iSum);
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    SumOfEvenFactors(number);

    return 0;
}
