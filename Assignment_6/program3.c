#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int a, int b)  
{
    if(a == b)
        return true;
    else
        return false;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter the two numbers: ");
    scanf("%d%d", &iValue1, &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}
