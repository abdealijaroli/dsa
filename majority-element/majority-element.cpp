class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int elem = 0;
        
        for(int i=0; i<n; i++){
            
            if(count == 0){
                elem = nums[i];
            }
            
            if(nums[i] == elem){
                count++;
            }
            else{
                count--;
            }
        }
        
        return elem;
        
        
//         int n = nums.size();
//         unordered_map<int, int> map;
        
//         for(int i=0; i<n; i++){
//             map[nums[i]]++;
//         }
           
//         for(auto &x : map){
//             if(x.second > n/2) return x.first;
//         }
        
//         return -1;
    }
};