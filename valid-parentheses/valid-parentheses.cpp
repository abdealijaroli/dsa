/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
   bool isValid(string s)
   {
      stack<char> sc;

      if (s.length() % 2 != 0)
      {
         return false;
      }

      for (auto &ch : s)
      {
         if(sc.empty()){
            sc.push(ch);
            continue;
         }
            if (ch == '(' || ch == '{' || ch == '[')
            {
               sc.push(ch);
               continue;
            }

            if ((ch == ')' && sc.top() == '(') ||
                (ch == '}' && sc.top() == '{') ||
                (ch == ']' && sc.top() == '['))
            {
               sc.pop();
            }
            else{
               return false;
            }
         
      }

      if (sc.empty())
      {
         return true;
      }
      else
      {
         return false;
      }
   }
   // while (!sc.empty())
   // {
   //    cout << sc.top() << endl;
   //    sc.pop();
   // }
};

// @lc code=end
