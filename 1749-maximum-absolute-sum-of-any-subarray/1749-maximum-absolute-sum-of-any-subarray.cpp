class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi = 0;
        int mini =0;
        int ans =0;

        for (int i = 0; i < nums.size(); i++) {
            
            maxi = max(0, maxi + nums[i]);
            mini = min(0, mini + nums[i]);

            ans = max(ans, max(maxi,abs(mini)));
        }

        return ans;
    }
};
