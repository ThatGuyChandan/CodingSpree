#include<stdio.h>

void main(){

int a,b,c,d,x,y;
printf("enter 4 digit value of x");
scanf("%d",&x);



d=x%10;
c=(x/10)%10;
b=(x/100)%10;
a=(x/1000)%10;





y=a+d;

printf("%d",y); 

}