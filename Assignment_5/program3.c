// Incomplete

#include<stdio.h>

void CheckLeapYear(int yr)
{
    int year = 0;

    if(year % 4 == 0)
    {
        printf("Leap year ");
    }
    else if (year % 400 == 0)
    {
      printf("Not leap year");  
    }
    else
    {
        printf("Not leap year");
    }
}

int main()
{
   int yr = 0;;

   printf("Enter year : ");
   scanf("%d",&yr);

   CheckLeapYear(yr);
   
    return 0;
}