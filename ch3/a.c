#include<stdio.h>
void main(){

int n=0,p=1;
printf("enter the value of n");
scanf("%d",&n);

while(n>1){

    p=p*n;
    

n=n-1;
}
printf("%d",p);
}