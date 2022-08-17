class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        long long lsum = 0;
        
        for(int i=0; i<n; i++){
            if(i==0)
                lsum = 0;
            else
                lsum += nums[i-1];
            
            long long rsum = 0;
            int r = i+1;
            
            while(r<n){
                rsum += nums[r];
                r++;
            }
            
            if(lsum == rsum) return i;
            
        }
        return -1;
    }
};