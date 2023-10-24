#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    nums.push_back(1);
      nums.push_back(2);
        nums.push_back(3);
          nums.push_back(4);
            nums.push_back(5);
            nums.push_back(6);
            if(nums.size()%2!=0){
    int j=nums.size()-1;
	for(int i=0;i<(nums.size()-1)/2;i++){
	    while(j>(nums.size()-1)/2){
	        int temp;
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j--;
                break;
	    }
	}
            }
            else{
                int j=nums.size()-1;
	for(int i=0;i<(nums.size())/2;i++){
	    while(j>=(nums.size())/2){
	        int temp;
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j--;
                break;
	    }
	}
            }
	for(int i=0;i<nums.size();i++){
	    cout<<nums[i];
	}
            
}

