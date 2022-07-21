class Solution {
public:
    int atMostK(vector<int>& nums, int k){
        int n = nums.size();
        unordered_map<int, int> map;
      
        int count = 0;
        int l = 0;
        int r = 0;
        
        while(r < n){
            
            map[nums[r]]++;
            
            while(map.size() > k){
                map[nums[l]]--;
                
                if(map[nums[l]] == 0)
                {
                    map.erase(nums[l]);   
                }   
                
                l++;
            }
            count += r-l+1;
            r++;
        }
        
        return count;
        
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k-1);
    }
};