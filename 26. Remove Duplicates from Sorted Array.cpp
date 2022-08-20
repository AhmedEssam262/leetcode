class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
	int old_size = nums.size();
	vector<int> new_vect;
	if (old_size == 0)
		return 0;
	new_vect.push_back(nums[0]);

	for (int i = 1; i < old_size; i++) {
		if (nums[i] == new_vect.back())
			continue;
		else
		{
			new_vect.push_back(nums[i]);
		}
		
	}
        nums=new_vect;
	return (new_vect.size());
}

};
