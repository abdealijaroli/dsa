class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> map;
        vector<int> res;
        
        for(int i=0; i<n; i++){
            map[nums[i]]++;            
        }
        
        for(auto &x : map){
            if(x.second > n/3){
                res.push_back(x.first);
            }
        }
        
        return res;
    }
};