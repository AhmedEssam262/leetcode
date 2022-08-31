class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
	int target = 1;
	int count = 1;
	if (nums.size() == 0)
		return 0;
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i] > nums[i - 1]) {
			count++;
			if (count > target) {
				target = count;
			}
		}
		else {
			count = 1;
		}

	}
	return target;
}
};
