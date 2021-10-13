#include<stdio.h>

void main(){

float ft,m,inc,cm,km;
printf("enter value of km");
scanf("%f",&km);
ft=km/328.084;
m=km/1000;
cm=km/100000;
inc=km/39370.079;
printf("%f %f %f %f",ft,m,cm,inc);

}