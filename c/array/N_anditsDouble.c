#include<stdio.h>


bool checkIfExist(int* arr, int arrSize){
for(int i=0;i<arrSize;i++){
    
 for(int j=i+1;j<arrSize;j++){
     if(arr[i]==arr[j]*2||arr[i]==arr[j]/2){
         return true;
         
     }
 }
 

}
return false;
}