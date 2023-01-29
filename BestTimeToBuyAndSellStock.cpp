// BEST TIME TO BUY AND SELL STOCK
/*
  PROBLEM LINK
  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan&id=level-1
 */
// SOLUTION
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min = INT_MAX;
        for(int i=0; i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min = prices[i];
                for(int j=i+1; j<prices.size();j++)
                    if(prices[j]>prices[i])
                        if(prices[j] - prices[i]> profit)
                            profit = prices[j]- prices[i];
            }

        }
        return profit;
    }
};
