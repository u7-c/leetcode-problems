class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        if(prices.size() < 2){
            return 0;
        }
        
        int min_price = prices.size();
        int max_profit = 0;
        
        for(int i = 1;i < prices.size();i++){
            int potential_profit = prices[i] - min_price;
            max_profit = max(max_profit , potential_profit);
            min_price = min(min_price , prices[i]);
        }
        return max_profit;
    }
};