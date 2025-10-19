class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int max_size = 0;//gonnna update it in the loop
        
        for(int i = 0;i < n;i++){
            for(int j = i + 1;j < n;j++){
                int currentprofit = prices[j] - prices[i];//buying on i and selling on j so yes
                
                if(currentprofit > max_size){
                    max_size = currentprofit;
                }
            }
        }
        return max_size;
    }
};