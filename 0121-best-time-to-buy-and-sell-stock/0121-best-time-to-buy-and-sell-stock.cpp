class Solution {
public:
//our motive is to buy price at lowest and sell t at hisghest to get max profit
//also imagine array indexes as days so u can't backtrack like buy next day sell yesterday 
    int maxProfit(vector<int>& prices) {
        int buy = prices[0]; //assign buy at 0th index /first elemt/first day
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){//iterate from next day/1st idx
            if(buy > prices[i]){
                buy = prices[i]; //if current_price lower than buy then assign new buy as lowest
            }
            int sell = prices[i] - buy;//ofc, sell = currentt_price - buy_price
            profit = max(profit,sell); //return max of profit,sell_price
        }
        return profit;
    }
};