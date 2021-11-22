#include<stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int b[numsSize];
    int count=0,j=0;
    for(int i=0;i<numsSize;i++){
        b[i]=0;
    }
   
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            count=count+1;
        }
        else{
        b[j]=count;
        j++;
        count=0;
        }
    } 
    int max=count;
    for(int i=0;i<numsSize;i++){
        printf("%d",b[i]);
        if(max<b[i]){
            max=b[i];
        }
    }
    
    return max;
}



void main(){
    // Take input from person
    int n=10;
    printf("array is ");
    
    int a[]={1,0,0,1,1,1,1,1,1};
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
            
        }
        printf("\n");
        // Call Function
        printf("\n%d",findMaxConsecutiveOnes(a,n));
    }

