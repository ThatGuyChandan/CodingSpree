#include<stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize){
          int sum=0;
    
  for(int i=0;i<numsSize;i++){
      int count=0;
      for(;nums[i]>0;nums[i]=nums[i]/10){
          if(nums[i]%10==0){
          count=count+1;
      }
      else{
          
          if(count%2==0){
              sum=sum+1;
          }
      }
      
      }
  }
  return sum;
}
    
 