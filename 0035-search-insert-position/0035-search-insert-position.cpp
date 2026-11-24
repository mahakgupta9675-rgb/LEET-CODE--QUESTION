class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0,hi = nums.size()-1;
        int ans =-1;
        while( lo<=hi ){
            int mid= lo +(hi-lo)/2;
            if(nums[mid]>=target){
                ans=mid;
                hi = mid-1;
            }
            else {
                lo=mid+1;
            }
        }
        if(ans==-1)
            return (nums.size());
        return ans;
    }
};