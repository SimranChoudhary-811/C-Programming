#include<stdio.h>
int main()
{
    int month;
    printf("Enter the number of the month(1-12):");
    scanf("%d", &month);
    if (month == 1)
    {
        printf("31 days in January");
    }
    else if (month == 2)
    {
        printf("28 or 29 days in February");
    } 
    else if (month == 3)
    {
        printf("31 days in March");
    }
    else if (month == 4)
    {
        printf("30 days in April");
    }
    else if (month==5)
    {
        printf("31 days in May");
    }
    else if (month==6)
    {
        printf("30 days in June");
    }
    else if (month==7)
    {
        printf("31 days in July");
    }
    else if (month==8)
    {
        printf("31 days in August");
    }
    else if (month==9)
    {
        printf("30 days in September");
    }
    else if (month==10)
    {
        printf("31 days in October");
    }
    else if (month==11)
    {
        printf("30 days in November");
    }
    else if (month==12)
    {
        printf("31 days in December");
    }
    else
    {
        printf("Invalid month number. Please enter a number between 1 and 12.");
    }
    return 0;
}
    