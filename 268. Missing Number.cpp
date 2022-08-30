class Solution {
public:
    int missingNumber(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int s = nums.size();
    if (nums[0] > 0)
		return nums[0] - 1;
	for (int i = 0; i < s-1; i++) {
		if (nums[i] == nums[i + 1] || (nums[i + 1] - nums[i] == 1)) {
			continue;
		}
		else {
			return i + 1;
		}
	}
	return s;
}
};
