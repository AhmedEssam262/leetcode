#include<vector>
#include<algorithm>
class Solution {
public:
int largestPerimeter(vector<int>& nums) {
	int s = nums.size();
	sort(nums.begin(), nums.end());
	int res = 0;
	for (int i = s - 1; i > 1; i--) {
		if (nums[i] < nums[i - 1] + nums[i - 2]) {
			res = nums[i] + nums[i - 1] + nums[i - 2];
			return res;
		}
	}
	return 0;
}
};
