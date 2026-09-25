#include<stdio.h>
int main()
{
 float p,r,t,si,ci;
 printf("Enter the principal amount,rate,time in years:"); 
 scanf("%f%f%f",&p,&r,&t);
 si=p*r*t/100;
 ci=p*(1+r/100)*t-p; // Compound interest calculation
 printf("The simple interest is %f",si);
 printf("\nThe compound interest is %f",ci);
return 0;
}