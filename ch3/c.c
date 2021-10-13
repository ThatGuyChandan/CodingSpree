#include<stdio.h>
void main(){
int x,y;

printf("enter the value of x");
scanf("%d",&x);

while(x<255){

y=x;

x=x+1;
printf("%d\n",y);

}
}