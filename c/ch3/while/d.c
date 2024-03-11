#include<stdio.h>
void main(){
int n=1,r;

while(n<=500){
int s=0,c=n;

while(c>0){

r=c%10;
s=s+(r*r*r);

c=c/10;

}
if (n==s){
printf("%d is armstrong number \n",n);
}
n=n+1;
}
}