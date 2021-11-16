#include<stdio.h>
void main(){
    int n,p;
    printf("enter the value of n=");
    scanf("%d",&n); 
    printf("enter the value of p=");
    scanf("%d",&p);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the number ");
        scanf("%d",&a[i]);
    }
int temp;
temp=a[p];
n=n-1;
for(int i=p;i<n;i++){
    a[n]=a[n+1];
}
    for(int i=0;i<n;i++){
    printf("\n%d",a[i]);
    }
}