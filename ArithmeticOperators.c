#include<stdio.h>
int main()
{
    int x,y,sum,sub,mul,div,mod;

    printf("Enter two integers:");
    scanf("%d %d",&x,&y);

    sum=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;
    mod=x%y;
    
    printf("The sum=%d\n",sum);
    printf("The subtraction=%d\n",sub);
    printf("The multiplication=%d\n")
    return 0;
}