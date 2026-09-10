class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int profit = 0 ;
        int n = prices.size();
        int buy = 0;
        for (int i = 1; i<n ; i++){
            if(prices[buy]>prices[i]){
                buy=i;
            }
            else{
                profit = prices[i]-prices[buy];
                maxi = max(maxi,profit);
            }
        }
        return maxi;
    }
};