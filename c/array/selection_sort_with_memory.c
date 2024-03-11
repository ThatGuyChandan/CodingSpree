#include<stdio.h>
void main(){
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        printf("enter the number ");
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        int min=0;
    for(int i=0;i<n;i++){
    if(a[i]<a[min]){
        min=i;
    }
    }
    b[j]=a[min];
    a[min]=1000;
    }
    for(int j=0;j<n;j++){
    printf("\n%d",b[j]);
    }
}