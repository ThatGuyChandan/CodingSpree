#include<stdio.h>
void main(){
int n,min[n],i=0,m;
printf("enter the value of n ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("\nenter the num ");
    scanf("%d",&min[i]);
}
m=min[0];
for(i=0;i<n;i++){
    if(min[i]<m){
        m=min[i];
    }
}
printf("minmum numb = %d",m);
}