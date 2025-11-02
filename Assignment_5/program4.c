#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Positive ");
    }
    else if(num < 0)
    {
        printf("Negative ");
    }
    if( num == 0 )
    {
        printf("Zero ");
    }
}

int main()
{
    int number = 0;

    printf("Enter number ");
    scanf("%d",&number);

   CheckNumberType(number);

    return 0;
}