class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        int low = 0;        //points to the first INDEX
        int mid = 0;
        int high = nums.size()-1;
        
        while (mid<=high){
            switch(nums[mid]){
                // when element at the index mid is 0
                case 0:
                    swap(nums[mid], nums[low]);
                    mid++;
                    low++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2: 
                    swap(nums[mid], nums[high]);
                    high--;
                    break;
            }
        }
    }
};