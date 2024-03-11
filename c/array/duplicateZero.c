#include<stdio.h>

void duplicateZeros(int* arr, int arrSize){
for(int i=0;i<arrSize;i++){
    if(arr[i]==0){
        for(int j=arrSize-1;i<j;j--){
            arr[j]=arr[j-1];
        }
        i++;
    }
}
return arr;
}
void main(){
    
    int n=8;
    printf("array is ");
    
    int a[]={1,0,2,3,0,4,5,0};
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        
        printf("\n");
        printf("\n%d",duplicateZeros(a,n));
}