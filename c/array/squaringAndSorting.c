
#include<stdio.h>
int* sortedSquares(int* nums, int numsSize, int* returnSize){
int b[numsSize];
for(int i=0;i<numsSize;i++){
b[i]=nums[i]*nums[i];

}

      for(int j=0; j<numssize-1;j++){
         for(int i=0;i<numssize-j-1;i++){
             if(nums[i]>nums[i+1]){
                  int temp;
                temp=nums[i+1];
                nums[i+1]=nums[i];
                nums[i]=temp;
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