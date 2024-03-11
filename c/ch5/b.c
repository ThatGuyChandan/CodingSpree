#include<stdio.h>
int rec();
void main(){
int n,sum;

printf(" enter five digit value in n ");
scanf("%d",&n);
sum=rec(n);
printf(" sum of five digit number = %d ",sum);
}
int rec(int x)
{
int s;
if(x==0){
    return(0);
}
else;
s=x%10+rec(x/10);
return(s);
}