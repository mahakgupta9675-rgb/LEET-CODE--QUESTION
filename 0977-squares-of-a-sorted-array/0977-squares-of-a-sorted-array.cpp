class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int i = 0;
        int j = nums.size() - 1;

        vector<int> ans(nums.size());

        int k = nums.size() - 1;

        while (i <= j) {

            if (nums[i] * nums[i] > nums[j] * nums[j]) {
                ans[k] = nums[i] * nums[i];
                i++;
            }
            else {
                ans[k] = nums[j] * nums[j];
                j--;
            }

            k--;
        }

        return ans;
    }
};
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {

//         for (int i = 0; i < nums.size(); i++) {
//             nums[i] = nums[i] * nums[i];
//         }

//         sort(nums.begin(), nums.end());

//         return nums;
//     }
// };