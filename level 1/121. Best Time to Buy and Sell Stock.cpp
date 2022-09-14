class Solution {
public:
    int maxProfit(vector<int>& prices) {
	int buy = prices[0];
	bool b = false;
	int sell = 0;
	int profit = 0;
	int dif = 0;
	for (int i = 0; i < prices.size() - 1; i++) {
         if (prices[i + 1] > prices[i] && prices[i] <= buy) {
			buy = prices[i];
			b = true;
             			sell = prices[i + 1];

		}
        
        
		else if ((sell < prices[i] || sell< prices[i+1]) && b) {
			sell = max(prices[i],prices[i+1]);
		}


		

		dif = sell - buy;
		if (dif > profit) {
			profit = dif;
		}

		
	}
        return profit;
}
};
