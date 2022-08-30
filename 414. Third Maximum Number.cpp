class Solution {
public:
    int thirdMax(vector<int>& nums) {
	set<int, greater<int>> n;
	for (int i = 0; i < nums.size(); i++) {
		n.insert(nums[i]);
	}
	auto it = n.begin();
	if (n.size() == 1 || (n.size() == 2))
		return *it;
	else {
		it++;
		it++;
		return *it;
	}
}
};
