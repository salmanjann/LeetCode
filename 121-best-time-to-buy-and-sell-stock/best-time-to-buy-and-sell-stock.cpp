class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int maxProfit = 0;
        int currentProfit = 0;
        for(int i=1; i<prices.size();i++){
            if(buyPrice > prices[i])
                buyPrice = prices[i];
            
            currentProfit = prices[i] - buyPrice;

            if( currentProfit > maxProfit)
                maxProfit = currentProfit;
        }

        return maxProfit;
    }
};