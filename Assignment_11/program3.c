#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iNo = 0;
    int iSum = 0;
    
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return 0;
    }

    for(iNo = iStart; iNo <= iEnd; iNo++)
    {
       iSum = iSum + iNo;
    }
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet !=0)
    {
       printf("Addition is : %d",iRet);
    }

    return 0;
}