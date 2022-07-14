class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        if(nums.empty()) return res;
        
        sort(nums.begin(), nums.end());
        
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                
                long long int target_2 = (long long)target - (long long)nums[i] - (long long)nums[j];
                
                int front = j+1;
                int back = n-1;
                
                while(front<back){
                    int fb_sum = nums[front] + nums[back];
                    if(fb_sum < target_2) 
                        front++;
                    else if(fb_sum > target_2)
                        back--;
                    else{
                        vector<int> quad(4,0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[front];
                        quad[3] = nums[back];
                        res.push_back(quad);
                        
                        
                        while(front<back and nums[front] == quad[2])
                            front++;
                        
                        while(front<back and nums[back] == quad[3])
                            back--;
                    }
                    
                }
                while(j+1 < n and nums[j+1]==nums[j])
                    j++;                
            }
            while(i+1<n and nums[i+1]==nums[i])
                i++;            
        }
        return res;
    }
};



//         set<vector<int>> sv;
        
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 for(int k=j+1; k<n; k++){
//                     long long int x = (long long)target - (long long)nums[i] - (long long)nums[j] - (long long)nums[k];
//                     if(binary_search(nums.begin()+k+1, nums.end(), x)){
//                         vector<int> arr;
//                         arr.push_back(nums[i]);
//                         arr.push_back(nums[j]);
//                         arr.push_back(nums[k]);
//                         arr.push_back(x);
//                         sort(arr.begin(), arr.end());
//                         sv.insert(arr);
//                     }
//                 }
//             }
//         }
        
        
//         vector<vector<int>> res(sv.begin(), sv.end());
//         return res;
//     }
// };