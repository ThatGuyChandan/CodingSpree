#include<stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize){ 
    int count=0,b=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            count=count+1;
        }
        else{
            if(b<count){
                b=count;
                }            }
                count=0;

        }
    }
    return b;
}

void main(){
    int n=10;
    printf("array is ");
    
    int a[]={1,0,0,1,1,1,1,1,1};
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
            
        }
        printf("\n");
        printf("\n%d",findMaxConsecutiveOnes(a,n));
    }
