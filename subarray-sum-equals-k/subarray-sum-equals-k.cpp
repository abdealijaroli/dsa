class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int, int> m;
        int pre = 0;
        int cnt = 0;
        
        for(int i=0; i<n; i++){
            pre += nums[i];
            
            if(pre == k)
                cnt++;
            
            int val = pre - k;
            
            if(m.find(val) != m.end())
                cnt += m[val];
            
            m[pre]++;    
        }
        return cnt;
    }
};