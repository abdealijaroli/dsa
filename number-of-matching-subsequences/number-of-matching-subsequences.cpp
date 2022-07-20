class Solution {
public:
    
    bool checkSubseq(string s1, string s2){
        int i=s1.size()-1; 
        int j=s2.size()-1;
        
        while(i>=0 and j>=0){
            if(s1[i] == s2[j]){
                i--;
                j--;
            }
            else{
                i--;
            }
        }
        
        if(j == -1){
            return true;
        }
        
        return false;
    }
    
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int n = s.length();
        int m = words.size();
        int cnt = 0;
        unordered_map<string, int> map;
        
        for(int i=0; i<m; i++){
           map[words[i]]++;
        }           
        
        for(auto &it : map){
            if(checkSubseq(s, it.first))
                cnt += it.second;
        }                     
        
        return cnt;
    }
};