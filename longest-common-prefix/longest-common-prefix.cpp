class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = 0, min = 1000;
        string str;

        // finding the min string
        for (int i = 0; i < strs.size(); i++)
        {
          if (strs[i].length() < min)
          {
             min = strs[i].length();
             str = strs[i];
          }
        }

        // algorithm
        // till the length of the minimum string is reached, because traversing past that doesnt make sense.
        for (int i = 0; i < min; i++)
        {
          // till all the elements in the string vector are traversed.
          for (int j = 0; j < strs.size(); j++)
          {
             if (strs[j][i] != str[i])
             {
                return str.substr(0, count);
             }
          }
          count++;
        }
        return str.substr(0, count);
    }
};