#include<stdio.h>
void main(){ 
    int n,x,p;
    printf("enter the value of n=");
    scanf("%d",&n);
    
    printf("enter the value of p=");
    scanf("%d",&p);
    
    printf("enter the value of x=");
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the number ");
        scanf("%d",&a[i]);
    }
n=n+1;
for(int i=n-1;i>p;i--){
    a[i]=a[i-1];
}
a[p]=x;

    for(int i=0;i<n;i++){
    printf("\n%d",a[i]);
    }
}