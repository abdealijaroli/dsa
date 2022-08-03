class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int, int> m;
        int pre = 0;
        int cnt = 0;
        
        for(int i=0; i<n; i++){
            pre += nums[i];
            
            if(pre == k)
                cnt++;
            
            int val = pre - k;
            
            if(m.find(val) != m.end())
                cnt += m[val];
            
            m[pre]++;    
        }
        return cnt;
        
//         vector<int> pre(n, 0);
//         pre[0] = nums[0];
        
//         for(int i=1; i<n; i++){
//             pre[i] = pre[i-1] + nums[i];
//         }
        
        
//         int cnt;
//         for(int i=0; i<n; i++){
//             cnt = 0;
//             for(int j=i; j<n; j++){
//                 int cs;
//                 if(i==0){
//                     cs = pre[j];
//                 }else{
//                     cs = pre[j] - pre[i-1];
//                 }
//                 cout<< cs << " ";
//             }
//         }
//         return cnt;
    }
};