#include<stdio.h>
 void main(){

float h,c,t;

printf("enter value of h,c,t");
scanf("%f%f%f",&h,&c,&t);

if (h>50 && c<0.7 && t>5600){
printf("grade is 10");
}
else
if(h>50 && c<0.7 && t<=5600){

    printf("grade is 9");
}
else 
if (c<0.7 && t>5600 && h<=50){

printf("grade is 8");

}
else 
if (h>50 && t>5600 && c>=0.7){
    printf("grade is 7");
}
else 
printf("grade is 5");

 }