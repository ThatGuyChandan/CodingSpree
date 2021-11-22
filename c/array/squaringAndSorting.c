
#include<stdio.h>
int* sortedSquares(int* nums, int numsSize, int* returnSize){
int b[numsSize];
for(int i=0;i<numsSize;i++){
b[i]=nums[i]*nums[i];

}

     for(int i=(numsSize-1);i>0;i--){
        for (int j=0;j<i;j++){
            if(b[j]>b[j+1]){
                int temp;
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
     }  

     return b[numsSize];
}
void main(){
    
    int numsSize=5;
    printf("array is ");
    
    int nums[]={2,4,3,5,1};
        for(int i=0;i<numsSize;i++){
            printf("%d ",nums[i]);
            
        }
        printf("\n");
        printf("\n%d",sortedSquares(nums,numsSize,returnSize));
}