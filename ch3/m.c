#include<stdio.h>
void main(){

int l=0,h,o;

while(l<=10){
printf("enter the value of h");
scanf("%d",&h);

if(h>40){
    o=(h-40)*12;
printf("over time payment =%d\n",o);
}
else 
printf("no overtime payment");
l++;
}

}


