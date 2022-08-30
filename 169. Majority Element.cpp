class Solution {
public:
int majorityElement(vector<int>& nums) {
	map<int, int> m;
	int s = nums.size();

	for (int i = 0; i < s; i++) {
		m[nums[i]]++;
	}
	auto itt = m.begin();
	int target = itt->first;
	for (auto q : m) {
		if (q.second > m[target]) {
			target = q.first;
		}
	}
	return target;
}
};
