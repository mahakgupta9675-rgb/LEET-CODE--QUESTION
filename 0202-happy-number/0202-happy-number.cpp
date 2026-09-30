class Solution {
public:
    bool isHappy(int n) {
        int ans = n;

        while (ans != 1) {
            int sum = 0;

            while (ans > 0) {
                int rem = ans % 10;
                sum = sum + rem * rem;
                ans = ans / 10;
            }

            ans = sum;

            if (ans == 4) {
                return false;
            }
        }

        return true;
    }
};