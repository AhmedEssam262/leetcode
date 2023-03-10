class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
	int max = -1;
	for (int i = 0; i < accounts.size(); i++) {
		int temp = accumulate(accounts[i].begin(), accounts[i].end(), 0);
		if (temp > max)
			max = temp;
	}
	return max;
}
};
