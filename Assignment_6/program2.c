#include<stdio.h>
#include<stdbool.h>

bool CheckGreater(int i)
{
    if(i > 100)    
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);

    if(bRet)   
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}
