#include<stdio.h>
int rec(int);
void main(){
int n,i;

printf(" enter number of term ");
scanf(" %d" ,&n);
for(i=1;i<=n;i++){
    printf("\n%d\n",rec(i));
}

}
int rec(int x){
    if(x<=1){
        
        return(x);
    }
    else;
    return(rec(x-1)+rec(x-2));
}