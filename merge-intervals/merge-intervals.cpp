class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> res;
        
        if(n==0){
            return intervals;
        }
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        
        for(auto &it : intervals){
            if(it[0] <= temp[1]){
                temp[1] = max(temp[1], it[1]);
            }
            else
            {
                res.push_back(temp);
                temp = it;
            }
        }
        res.push_back(temp);
        return res;
    }
};
        
        
        
            
//         if(n==1 or n==0){
//             return intervals;
//         }
//         for(int i=1; i<n; i++){
            
//             if(intervals[i][0] > intervals[i-1][1] or ){
//                 res.push_back(intervals[i]);
//             }            
//             else if(intervals[i][0] <= intervals[i-1][1]){
//                 intervals[i-1][1] = intervals[i][1];
//                 res.push_back(intervals[i-1]);
//             }
//         }
//         return res;
//  }
// };