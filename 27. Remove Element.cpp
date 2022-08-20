class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
	int old_size = nums.size();
	vector<int> new_vect;

	for (int i = 0; i < old_size; i++) {
		if (nums[i] == val) {
			continue;
		}
		else {
			new_vect.push_back(nums[i]);
		}
	}
    nums=new_vect;
	return new_vect.size();
}
};
