//question link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int M = prices[0];
        int m = prices[0];
        int res = 0;
        for(int i = 1 ; i < prices.size() ; i++) {
            if(prices[i] > M) {
                M = prices[i];
                res = max(res, M - m);
            }
            else if(prices[i] < m) {
                //nayi shuruyat
                M = m = prices[i];
            }
        }
        return res;
    }
};
