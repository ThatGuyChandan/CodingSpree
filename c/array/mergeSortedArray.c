#include<stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int j=0;
for(int i=0;i<nums1Size;i++){
    if(nums1[i]==0){
        nums1[i]=nums2[j];
        j++;
    }
}

     for(int i=(m+n-1);i>0;i--){
        for (int j=0;j<i;j++){
            if(nums1[j]>nums1[j+1]){
                int temp;
                temp=nums1[j+1];
                nums1[j+1]=nums1[j];
                nums1[j]=temp;
            }
        }
     } 
     return nums1;
}