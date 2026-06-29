// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         for(int x=0; x <= 30 ; x++){
//             int power = pow(2,x);
//             if(power==n){ 
//                 return true ;
//             }
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};