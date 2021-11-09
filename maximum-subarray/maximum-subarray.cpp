class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //kadane's 
        
        int currentSum = 0;
        int largestSum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            currentSum += nums[i];
            largestSum = max(largestSum, currentSum);
            
            if (currentSum < 0)
            {
                currentSum = 0;
            }
        }
        return largestSum;
}
        
        
        
    //prefix sum approach
//         int maxSum=INT_MIN;
        
//         if (nums.size() == 1){
//             maxSum = nums[0];
//         }
        
//         //prefix logic
//         int prefix[nums.size()];
//         prefix[0] = nums[0];
//         for (int i = 1; i < nums.size(); i++){
//             prefix[i] = prefix[i - 1] + nums[i];
//         }
        
//         // looping
//         for (int i=0; i<nums.size(); i++){
//             for (int j=i; j<nums.size(); j++){
//                  int currentSum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
//                 maxSum = max(maxSum, currentSum);
//             }
//         }
//         return maxSum;
//     }
        
        
        //bruteforce 
    //     int maxSum=INT_MIN;
    //     if (nums.size() == 1){
    //         maxSum = nums[0];
    //     }
    //     for (int i=0; i<nums.size(); i++){
    //         for (int j=i; j<nums.size(); j++){
    //             int currentSum=0;
    //             for (int k=i; k<=j; k++){
    //                 currentSum+=nums[k];
    //             }
    //             maxSum = max(maxSum, currentSum);
    //         }
    //     }
    //     return maxSum;
    // }
};