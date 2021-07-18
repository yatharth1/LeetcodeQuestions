class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minSoFar = prices[0];
        int maxProfit = 0;
        int currentProfit = 0;
        
        for(int i  = 0; i < prices.size(); i++){
            minSoFar = min(minSoFar, prices[i]);
            currentProfit = prices[i] - minSoFar;
            maxProfit = max(maxProfit, currentProfit);
        }
        return maxProfit;
    }
};