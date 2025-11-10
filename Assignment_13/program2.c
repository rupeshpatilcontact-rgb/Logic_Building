#include<stdio.h>

void print_number(int limit)
{
    int iCnt = 0; 

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int limit;

    printf("Enter number\n");
    scanf("%d",&limit);

    print_number(limit);

    return 0;
}