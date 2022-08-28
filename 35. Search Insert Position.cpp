class Solution {
public:
int result = 0;
int s(vector<int>& nums, int start, int end, int target) {
	
	int st = start;
	int e = end;
	int t = target;
	int size = nums.size();
    
	if (t > nums[e] && end==size-1)
		return size;
	if (t < nums[0] && end==size-1)
		return 0;
	int mid = (e + st) / 2;
	if (nums[mid]<target && nums[mid + 1]>target) {
		result = mid + 1;
		return result;
	}
	if (nums[mid] == t) {
		result = mid;
		return result;
	}
	if (nums[mid + 1] == t) {
		result = mid + 1;
		return result;
	}
	else if (nums[mid] > target) {
		e = mid;
		s(nums, st, e, t);
	}
	else if (nums[mid] < target) {
		st = mid + 1;
		s(nums, st, e, t);
	}
	return result;
}
    int searchInsert(vector<int>& nums, int target) {
     	int m= s(nums, 0, nums.size() - 1, target);
        return m;
    }
};
