class Solution{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int col0 = 1;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for(int i=0; i<rows; i++){
            if(matrix[i][0] == 0)
                col0 = 0;
            
            for(int j=1; j<cols; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=rows-1; i>=0; i--){
            for(int j=cols-1; j>=1; j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        if(col0 == 0)
            matrix[i][0] = 0;
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         //bool rowZero = false;
        
//         vector<bool> rowVec(matrix.size());
//         vector<bool> colVec(matrix[0].size());
        
//         for (int r = 0; r < matrix.size(); r++)
//         {
//             for (int c = 0; c < matrix[0].size(); c++)
//             {
//                 if (matrix[r][c] == 0){
//                     rowVec[r] = true;
//                     colVec[c] = true;
//                 }
//             }
//         }
        
//         for (int r = 0; r < matrix.size(); r++)
//         {
//             for (int c = 0; c < matrix[0].size(); c++)
//             {
//                 if (rowVec[r] || colVec[c]){
//                     matrix[r][c] = 0;                    
//                 }
//             }
//         }
    }
};