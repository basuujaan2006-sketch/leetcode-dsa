class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0], bestprofit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > bestbuy) {
                bestprofit = max(prices[i]-bestbuy, bestprofit);
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        return bestprofit;
    }
};