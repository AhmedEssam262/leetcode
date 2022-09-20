class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
	int arr[1002] = {0};
	if (cost.size() == 0 || cost.size() == 1)
		return 0;
	else {
		arr[2] = min(cost[0], cost[1]);

		for (int i = 3; i <= cost.size(); i++) {
			arr[i] = min(cost[i - 2] + arr[i - 2], cost[i - 1] + arr[i - 1]);
		}

	}
	return arr[cost.size()];
}
};
