// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int, bool> map;
        int *res = new int[2], i;
        
        for (i=0; i<n; i++){
            if (map.find(arr[i]) == map.end())
                map[arr[i]] = true;
            else
                res[0]=arr[i];
        }
        for (i=1; i<=n; i++){
            if(map.find(i) == map.end())
                res[1]=i;
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends