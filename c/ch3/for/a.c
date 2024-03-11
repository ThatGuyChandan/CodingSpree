#include<stdio.h>
void main(){

int r,n,c;

for(n=1;n<=500;n=n+1){
int s=0;
for(c=n;c>0;c=c/10){
r=c%10;
s=s+(r*r*r);

}

if(n==s){

    printf("%d is armstrong number\n",n);
}

}

}