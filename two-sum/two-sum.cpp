class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int sum) {
        unordered_map<int, int> m;
        vector<int> result;
        int x;

        for(int i=0; i<arr.size(); i++)
        {

            x = sum - arr[i];
            if (m.find(x) != m.end() && m.find(x)->second != i)
            {
                result.push_back(i);
                result.push_back(m.find(x)->second);
                return result;
            }
            //should insert in the map after the if-condition only, to avoid duplicates
            m[arr[i]] = i;
        }
        return result;
    }
};