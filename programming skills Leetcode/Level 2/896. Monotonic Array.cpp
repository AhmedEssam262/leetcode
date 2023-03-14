class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
	int c1 = 1;
	int c2 = 1;
	for (int i = 0; i < nums.size()-1; i++) {
		if (nums[i + 1] >= nums[i]) {
			c1++;
		}
		if (nums[i + 1] <= nums[i]) {
			c2++;
		}
	}
	if (c1 == nums.size() || c2 == nums.size()) {
		return true;
	}
	return false;
}
};
