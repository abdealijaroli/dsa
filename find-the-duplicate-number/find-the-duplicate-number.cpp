class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1])
        //         return nums[i];
        // }
        // return -1;
        
        unordered_set<int> s;
        for (auto num : nums){
            if(s.count(num))
                return num;
            s.insert(num);
        }
        return -1;
    }
};