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
     for(int i=(n-1);i>0;i--){
        for (int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
     } 
    for(int j=0;j<n;j++){
        printf("%d\n",a[j]);
    }
     }