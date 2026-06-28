class Solution {
public:
    int subtractProductAndSum(int n) {

        int product = 1;
        int sum = 0;
        
        
        while(n!=0){
            int remender = n % 10;
            product = product * remender;
            sum = sum + remender;
            n=n/10;
        }
        return product - sum;
    }
};