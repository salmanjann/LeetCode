class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int totalProfit = 0; 
        int prevProfit = 0;
        bool isBuy = false;
        int buy = -1;
        for(int i=0; i<n; i++){
            // if(!buy && nums[i] > nums[i+1])

            if(!isBuy && ( i == n-1 || nums[i] < nums[i+1])){
                buy = nums[i];
                isBuy = true;
                prevProfit = 0; 
            }

            if(isBuy && buy < nums[i]){
                int currentProfit = nums[i] - buy;
                if(currentProfit > prevProfit)
                    prevProfit = currentProfit;
            }

            if(isBuy && (i== n-1 || nums[i] > nums[i+1])){
                isBuy = false;
                buy = -1; 
                totalProfit += prevProfit;
            }
        }

        return totalProfit;
    }
};