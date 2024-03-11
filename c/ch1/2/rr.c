#include<stdio.h>

void main(){

int a,b,c,d,y,x;

printf("enter 4 digit  value of x");
scanf("%d",&x);


d=x%10;
c=(x/10)%10;
b=(x/100)%10;
a=(x/1000)%10;




y=d*1000+c*100+b*10+a;

printf("%d",y);


}