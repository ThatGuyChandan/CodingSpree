#include<stdio.h>
void main(){
int calsum(int x,int y,int z,int u,int v);
int n,a,b,c,d,e,sum;
printf("enter five digit value in n ");
scanf("%d",&n);

a=n%10;
b=(n/10)%10;
c=(n/100)%10;
d=(n/1000)%10;
e=(n/10000)%10;
sum= calsum(a,b,c,d,e);
printf("sum of digit of 5 digit number= %d ",sum);
}
int calsum(int x,int y,int z,int u,int v){
int s;
s=x+y+z+u+v ;
return(s);
}