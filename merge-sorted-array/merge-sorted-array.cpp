class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        
        for(int i = 0; i<m; i++){
            nums3.push_back(nums1[i]);
        }
        for(int i = 0; i<n; i++){
            nums3.push_back(nums2[i]);
        }
        
        sort(nums3.begin(), nums3.end());
        
        nums1.clear();
        
        for(int i = 0; i<nums3.size(); i++){
            nums1.push_back(nums3[i]);
        }
    }
};