#include<stdio.h>
int even(int* nums, int numsSize){
          int sum=0;
    
  for(int i=0;i<numsSize;i++){
      int count=0;
      while (nums[i] != 0) {
                 nums[i] = nums[i] / 10;
                 ++count;
              }
                
                    if(count%2==0){
                        sum+=1;
                }
      
      }
  
  return sum;
}
    
 