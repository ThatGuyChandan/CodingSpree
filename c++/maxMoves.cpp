#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int m= grid.size();
        int n= grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        int maxVal=0;
        for(int j=n-2;j>=0;j--){
            for(int i=0;i<m;i++){
                 if(i>0 && grid[i-1][j+1]>grid[i][j]){

                    dp[i][j]= max(dp[i][j],1+dp[i-1][j+1]);
                 }
                 if(grid[i][j+1]>grid[i][j]){
                    dp[i][j]= max(dp[i][j],1+dp[i][j+1]);

                 }
                if(i!=m-1 && grid[i+1][j+1]>grid[i][j]){
                    dp[i][j]= max(dp[i][j],1+dp[i+1][j+1]);
                }
                 if(j==0){
                     maxVal=max(dp[i][j],maxVal);
                 }
            }
        }
            return maxVal;
    }
};
    int main() {
        Solution solution;
    vector<vector<int>> grid1 = {{2, 4, 3, 5}, {5, 4, 9, 3}, {3, 4, 2, 11}, {10, 9, 13, 15}};
    int result = solution.maxMoves(grid1);
    cout << "max moves :" << result << endl; 

    return 0;
}
