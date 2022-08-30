class Solution {
public:
void rotate(vector<int>& nums, int k) {
	int s = nums.size();
    k = k % s;

	vector<int> temp;
	for (int i = 0; i < s; i++) {
		temp.push_back(nums[(s - k + i) % s]);
	}
	nums = temp;
	temp.clear();
}
};
