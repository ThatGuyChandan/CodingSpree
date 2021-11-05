#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("new value of a=%d\nnew value of b=%d",a,b);

}