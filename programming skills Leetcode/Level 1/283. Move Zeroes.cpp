class Solution {
public:
    void moveZeroes(vector<int>& nums) {
	for (int i = 0; i < nums.size(); i++) {
		if (i + 1 > nums.size()) {
			break;
		}
		if (nums[i] == 0) {
			int j = i + 1;
			if (j == nums.size()) {
				break;
			}
			if (nums[j] != 0) {
				swap(nums[i], nums[j]);
			}
			else {
				while (true)
				{
					if (j < nums.size()) {
						j++;
						if (j == nums.size()) {
							break;
						}
						if (nums[j] != 0) {
							swap(nums[i], nums[j]);
							break;
						}
					}
				}
			}
		}
	}
}
};
