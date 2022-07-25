class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        int i=0,j=0;
        
        
        for(i=0; i<n; i++){
            if(binary_search(mat[i].begin(), mat[i].end(), target)){
                return true;
            }
        }
        
        return false;
        
//         if(n==1 and mat[0][0] == target)
//             return true;
        
//         while(i<n and j<m){
//             if(mat[i][j] == target){
//                 return true;
//             }
//             i++;
//             j++;
//         }
//         return false;
    }
};