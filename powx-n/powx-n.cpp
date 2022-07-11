class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        
         while(n){
            if(abs(n%2)){ 
                res=(n>0) ? res*x : res/x;
            }
            x = x*x;
            n = n/2;
        }
        return res;
        
//         if(n<0){
//             while(n!=0){
//                 res = res*x;
//                 n++;
//             }
//             return 1/res;
//         }
        
//         while(n>0){
//             res = res*x;
//             n--;
//         }
//     return res;
    }
};