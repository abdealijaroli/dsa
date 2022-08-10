class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        nums[idx++] = nums[0];
        for(int i=1; i<n; i++){ 
            if(nums[i] != nums[i-1]){
                nums[idx] = nums[i];
                idx++;
            }
        }
        
        return idx;
        
        
        //cout<<diff+1;
        
//         while(i<n and j<n){
//             if(nums[i] == nums[j]){
//                 if(nums[idx] != nums[i]){ 
//                     nums[idx] = nums[i];
//                     idx++;
//                 }
//                 while(nums[j] == nums[j+1]) j++;
//                 i = j;
//                 j++;
//                 idx++;
//             }
//             else{
//                 nums[idx] = nums[j];
//                 idx++;
//                 i++;
//                 j++;
//             }

    }
};