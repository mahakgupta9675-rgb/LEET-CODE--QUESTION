class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int k =0;
        for(int i = 0 ; i <nums.size(); i++){
            if(nums[i]!=val){
                swap(nums[k],nums[i]);
                k++;
            }
        } 
        return k;   

    }
};
// method 2
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;

        for(int i = 0 ; i <nums.size(); i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
            }
        }
        nums=ans;
        return nums.size();   

    }
};
