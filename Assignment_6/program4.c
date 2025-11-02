#include<stdio.h>

int Multiply(int a, int b, int c)
{
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    if(c < 0) c = -c;

    return a * b * c;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter the three numbers: ");
    scanf("%d%d%d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n", iRet);

    return 0;
}
