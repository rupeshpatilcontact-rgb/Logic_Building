#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iNo = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iNo = iStart; iNo <= iEnd; iNo++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}