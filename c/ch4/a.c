#include<stdio.h>
void main(){
int x;
printf("enter value of x");
scanf("%d",&x);

switch(x){
case 1:
printf("\n You selected 1\n");
        
int n,p=1;
printf("enter the value of n");
scanf("%d",&n);

while(n>1){

    p=p*n;
    

n=n-1;
}
printf("factorial is %d",p);

break;
case 2:
printf("\n You selected 1\n");
int a;
printf("enter the value of a");
scanf("%d",&a);
if(a%2==0){
    printf("even");
}
else;
printf("odd");

break;
default:
printf("exit");


}
}