class Solution {
public:
    bool isPalindrome(int x) {
      string oldStr = to_string(x);
      string newStr = to_string(x);
      reverse(newStr.begin(), newStr.end());

      cout<<newStr<<endl;
      cout<<oldStr<<endl;

      if(newStr==oldStr){
        return true;
      }else {
        return false;
      }
    }
};