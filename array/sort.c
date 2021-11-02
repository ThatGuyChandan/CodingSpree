#include<stdio.h>
void main(){
    int min=0,n,i,a[n];
    printf("enter thr value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the num ");
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++){
    if(a[i]<a[min]){
        min=i;
    }
}
printf("%d",min);
}