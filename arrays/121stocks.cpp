//the que says u need to find the time where u buy the stock and sell and get the maximum profit
//it is a two pointer approach and moreover the greatest diff between right and left ptr means the max profit thereby answer....

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int l = 0;
        int r = 0;
        while(r<prices.size()){
            if(prices[l] < prices[r]){
                int profit = prices[r] - prices[l];
                maxprofit = max(maxprofit , profit);            
            }
            else{
                l = r;
            }
            r++;
        }
        return maxprofit;
    }
};