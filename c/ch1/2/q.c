#include<stdio.h>

void main(){

int x;

printf("enter any value of x");
scanf("%d",&x);

if((x%400==0)||(x%400!=0 && x%100!=0)||(x%100!=0 && x%4==0))

printf("leap year");

else
printf("not a leap year");

}