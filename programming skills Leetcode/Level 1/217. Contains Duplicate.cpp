class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
	map<int, int> m;
	for (int i = 0; i < nums.size(); i++) {
		m[nums[i]]++;
	}
	auto it = m.begin();
	for (; it != m.end(); it++) {
		if (it->second > 1)
			return true;
	}
	return false;
}
};
