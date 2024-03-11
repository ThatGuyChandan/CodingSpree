#include<stdio.h>
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int b[numsSize];
    int j=0;
for(int i=0;i<numsSize;i++){
    if(nums[i]%2==0){
        b[j]=nums[i];
    }
    else{
    numsSize=numsSize-1;
    b[numsSize]=nums[i];
    }
}
return b;
}