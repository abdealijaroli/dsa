class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        
        for(auto &x : nums){
            s.insert(x);
        }
        
        int longestBand = 0;
        
        for(auto &elem : nums){
            int parent = elem - 1;
            
            if(s.find(parent) == s.end()){
                int next_elem = elem + 1;
                int cnt = 1;
                
                while(s.find(next_elem) != s.end()){
                    next_elem++;
                    cnt++;
                }
                
                longestBand = max(longestBand, cnt);
            }
        }
        
        return longestBand;
    }
};