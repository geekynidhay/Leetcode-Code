class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int e = prices.size();
        int sum = 0, count = 0;
        sort (prices.begin(), prices.end());

        sum = prices[0] + prices[1];
        if (sum <= money){
            return (money - sum);
        }

        return money;
    }
};