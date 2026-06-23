class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int a = 0;
        int b = 1;
        while(b<prices.size()){
            if(prices[b]<=prices[a]){
                a = b;
            }else{
                profit = max(profit,prices[b]-prices[a]);
            }
            b++;
        }
        return profit;
    }
};
