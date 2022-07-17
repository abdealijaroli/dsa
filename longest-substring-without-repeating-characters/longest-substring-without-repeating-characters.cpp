class Solution {
public:
    int lengthOfLongestSubstring(string s) {       
        int n = s.length();
        
        if(n==0){
            return 0;
        }
        
        unordered_set<char> set;

        int maxLen = INT_MIN;        
        int l=0;
        
        for(int r=0; r<n; r++){
            
            int len = 0;
            if(set.find(s[r]) != set.end()){
                while(l<r && set.find(s[r]) != set.end()){
                    set.erase(s[l]);
                    l++;
                }
            }
            set.insert(s[r]);
            maxLen = max(maxLen, r-l+1);
            
        }
        
        return maxLen;
    }
};