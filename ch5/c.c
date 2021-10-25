#include<stdio.h>
int rec(int,int);
void main(){
int n,p;
printf("enter  the value of positive integer ");
scanf("%d",&n);
p=rec(n,2);
printf("\nprime factor of entered positive integer are %d",p);
}  

int rec(int x,int c){  
if(x<1){
    return(0);
}
    else if (x%c==0){
       return rec(x/c,c);
    }
else;
return rec(x,c+1);

}