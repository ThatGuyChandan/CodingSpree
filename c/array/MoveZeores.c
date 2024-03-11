#include<stdio.h>

void moveZeroes(int* nums, int numsSize){
    int c=0,j=0;
    int b[numsSize];
for(int i=0;i<numsSize;i++){
    if(nums[i]==0){
        c=c+1;
    }
    else{
        b[j]=nums[i];
        j++;
    }
}
for(int x=numsSize-c;x<numsSize;x++){
    b[x]=0;
}
return b;
}