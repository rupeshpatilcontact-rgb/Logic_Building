#include<stdio.h>

void DisplayConvert(char CValue)
{

    if(CValue >= 'A' && CValue <= 'D')
    {
        printf("%c\n",CValue +32);
    }
    else
    {
        printf("%c\n",CValue -32);  
    }
   
}

int main()
{
    char CValue = 0;

    printf("Enter character ");
    scanf("%c",&CValue);

    DisplayConvert(CValue);

    return 0;
}