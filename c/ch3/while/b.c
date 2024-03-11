#include<stdio.h>
void main(){
    
int a,b,p=1;

printf("enter the value of a,b ");
scanf("%d %d",&a,&b);

while (b>0){

p=p*a;
b=b-1;

}
printf("a power b=%d",p);


}