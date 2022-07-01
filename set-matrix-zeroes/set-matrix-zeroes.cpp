class Solution{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        //bool rowZero = false;
        
        vector<bool> rowVec(matrix.size());
        vector<bool> colVec(matrix[0].size());
        
        for (int r = 0; r < matrix.size(); r++)
        {
            for (int c = 0; c < matrix[0].size(); c++)
            {
                if (matrix[r][c] == 0){
                    rowVec[r] = true;
                    colVec[c] = true;
                }
            }
        }
        
        for (int r = 0; r < matrix.size(); r++)
        {
            for (int c = 0; c < matrix[0].size(); c++)
            {
                if (rowVec[r] || colVec[c]){
                    matrix[r][c] = 0;                    
                }
            }
        }
    }
};