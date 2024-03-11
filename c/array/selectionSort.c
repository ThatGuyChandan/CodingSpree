#include<stdio.h>
void main(){ 
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the number ");
        scanf("%d",&a[i]);
}
for(int j=0;j<n;j++){
    int min=j;
    for(int i=j;i<n;i++){
        if(a[i]<a[min]){
       min=i;
        }
    }
    int temp;
    temp=a[min];
    a[min]=a[j];
    a[j]=temp;
    
}
    for(int j=0;j<n;j++){
        printf("%d\n",a[j]);
    }
}