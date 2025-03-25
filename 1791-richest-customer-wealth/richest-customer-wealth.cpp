class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -99;
        int sum;
        for(int i=0; i<accounts.size(); i++){
            sum = 0;
            for(int j=0; j<accounts[i].size(); j++)
                sum += accounts[i][j];

            if(sum > max)
                max = sum;
        }
        return max;
    }
};