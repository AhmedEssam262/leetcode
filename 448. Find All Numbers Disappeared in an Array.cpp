class Solution {
public:
    
vector<int> findDisappearedNumbers(vector<int>& nums) {
	vector<int> res;
	map<int, int> m;
	for (int i = 0; i < nums.size(); i++) {
		m[nums[i]]++;
	}
	for (int j = 1; j <= nums.size(); j++) {
		if (m[j] == 0) {
			res.push_back(j);
		}
	}
	return res;
}
};
