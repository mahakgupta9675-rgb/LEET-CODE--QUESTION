class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        // int maxi=nums[0];
        int currmini= nums[0];
        int mini =nums[0];
        int currmaxi= nums[0];
        int maxi =nums[0];
        for(int x : nums){
            total+=x;
        }
        for (int i =1;i<nums.size();i++){

            currmaxi=max(nums[i], currmaxi +nums[i]);
            maxi = max(maxi,currmaxi); 

            currmini=min(nums[i], currmini+nums[i]);
            mini = min(mini,currmini); 
        }
        if(maxi<0){
            return maxi;
        }
        return max(maxi, total - mini);
       
    }
};