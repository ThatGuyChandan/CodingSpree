#include<stdio.h>
void main(){
    int n,a[n],b[n],c[],i,sum=0;
    printf("value of n=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter the price ");
        scanf("%d",&a[i]);
        printf("enter the quantity ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i]*b[i];
        printf("\n%d",c[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+c[i];
    }
    printf("\ntotal price= %d",sum);
}