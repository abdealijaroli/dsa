// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        const long long int m = 1000000007;
        int fib[n+2];
        int i;
        fib[0] = 0;
        fib[1] = 1;
        
        for(i=2; i<=n; i++){
            fib[i] = (fib[i-1]+fib[i-2])%m;
        }
        return fib[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends