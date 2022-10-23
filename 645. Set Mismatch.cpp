class Solution {
public:
vector<int> findErrorNums(vector<int>& nums) {
	int repeated, missed;
	vector<int> res;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] == nums[i + 1]) {
			repeated = nums[i];
			break;
		}
	}
	for (int i = 1; i <= nums.size(); i++) {
		auto it =find(nums.begin(), nums.end(), i);
		if (it != nums.end())
			continue;
		else {
			missed = i;
			break;
		}
	}
	res.push_back(repeated);
	res.push_back(missed);
	return res;
}

};
