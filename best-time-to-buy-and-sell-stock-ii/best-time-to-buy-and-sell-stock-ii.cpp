class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxProf = 0;
        // int minPrice = INT_MAX;
        // for(int i=0; i<prices.size();i++)
        // {
        //     minPrice = min(minPrice, prices[i]);
        //     maxProf = max(maxProf, prices[i] - minPrice);
        // }
        // return maxProf;   ANSWER = 5 IT IS CORRECT FOR I
        
        int profit=0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > prices[i-1])
                profit = profit + (prices[i]-prices[i-1]);
        }
        return profit;
    }
};