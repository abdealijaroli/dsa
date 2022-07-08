class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        
        for(int i=0; i<n; i++){
            for(auto &it : matrix[i]){
                if(it==target) return true;
            }
        }
        return false;
    }
};