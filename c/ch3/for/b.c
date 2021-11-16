#include<stdio.h>
void main(){

int n,i;
for(n=1;n<=300;n=n+1){
for(i=2;i<n;i=i+1){
    if(n%i==0){

        break;
    }
}
if(n==i){
    printf("%d\n",n);
}
}

}