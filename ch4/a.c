#include<stdio.h>
void main(){

int n;
printf("enter the value of n");
scanf("%d",&n);

switch(n)
{
case 1:

int p=1;

while(n>1){

    p=p*n;
    

n=n-1;
}
printf("1.factorial of number is %d\n",p);
break;

case 2:

int i,c

for(i=2;i<n;i=i+1){
    if(n%i==0){
printf("2.not a prime number");
        break;
    }
}
if(n==i){
    printf("2.prime number\n");
}

case 3:

exit();





}
}
