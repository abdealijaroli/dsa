class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];
        int sum = 0;
        
        for(auto it : nums){
            sum += it;
            maxSum = max(sum, maxSum);  
            if(sum<0)
                sum = 0;
        }
        return maxSum;
    }
};