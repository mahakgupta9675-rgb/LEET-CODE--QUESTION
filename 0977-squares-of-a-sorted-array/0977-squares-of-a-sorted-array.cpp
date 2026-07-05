class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        vector<int> ans(nums.size());

        int k = nums.size() - 1;

        while (left <= right) {

            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                ans[k] = leftSquare;
                left++;
            } else {
                ans[k] = rightSquare;
                right--;
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