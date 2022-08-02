class Solution {
public:
    // int countPaths(int i, int j, int m, int n){
    //     if(i==(m-1) && j==(n-1)){
    //         return 1;
    //     }
    //     if(i>=m or j>=n){
    //         return 0;
    //     }
    //     else{
    //         return countPaths(i+1, j, m, n) + countPaths(i, j+1, m, n);
    //     }
    // }
    
    int uniquePaths(int m, int n) {
        
        int dp[m][n];
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 or j==0)
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];        
    }
};