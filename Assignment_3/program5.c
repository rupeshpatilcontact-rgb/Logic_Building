#include<stdio.h>
#include<stdbool.h>

typedef int iNo;

#define TRUE 1
#define FALSE 0

bool CheckVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || 
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;
 
    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}