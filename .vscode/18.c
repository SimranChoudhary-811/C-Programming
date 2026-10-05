#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);
            even++;
        }
        else
        {
            printf("%d is odd\n",i)
            odd++;
        }
    }
    printf("Total even numbers is%d and total odd is %d,even,odd");
    return 0;
}