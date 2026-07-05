class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int i = 0;
        int j = nums.size() - 1;

        while (i <= j) {
            nums[i] = nums[i] * nums[i];
            if (i != j)
                nums[j] = nums[j] * nums[j];

            i++;
            j--;
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};