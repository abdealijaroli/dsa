class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i, j;
        
        for (i = 0; i < n; i++){
            for (j = i+1; j < n; j++){
                if (nums[i] >= nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};