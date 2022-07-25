class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        int i = n-1;
        int j = 0;
        
        
        while(i>=0 and j<m){
            if(mat[i][j] < target){
                j++;
            }
            else if(mat[i][j] > target){
                i--;
            }
            else{
                return true;
            }
        }
        return false;
        
        
//         for(i=0; i<n; i++){
//             if(binary_search(mat[i].begin(), mat[i].end(), target)){
//                 return true;
//             }
//         }
        
//         return false;
        

    }
};