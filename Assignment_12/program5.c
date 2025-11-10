#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int number)
{
    if((number % 5) == 0)
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
    int number;
    bool result;

    printf("Enter number: ");
    scanf("%d", &number);

    result = is_divisible_by_five(number);

    if(result == true)
    {
        printf("%d is divisible by 5\n", number);
    }
    else
    {
        printf("%d is not divisible by 5\n", number);
    }

    return 0;
}
