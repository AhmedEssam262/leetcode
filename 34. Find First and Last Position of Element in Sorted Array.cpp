#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
	int start = 0, end = nums.size() - 1;
	int mid;
	vector<int> index = { -1,-1 };
	if (start == end && nums[0] == target) {
		index[0] = 0;
		index[1] = 0;
		return index;
	}
	else if (start == 0 && end == 1) {
		if (nums[start] == target && nums[end] == target) {
			index[0] = 0;
			index[1] = 1;
		}
		else if (nums[start] == target && nums[end] != target) {
			index[0] = 0;
			index[1] = 0;
		}
		else if (nums[end] == target) {
			index[0] = 1;
			index[1] = 1;
		}
		return index;
	}
	while (start <= end)
	{
		mid = (start + (end )) / 2;
		if (nums[mid] == target) {
			index[0] = mid;
			index[1] = mid;
			int i = mid;
			while (i < nums.size())
			{
				if (nums[i] == target)
					index[1] = i;
				i++;
			}
			int j = mid;
			while (j >= 0)
			{
				if(nums[j]==target)
					index[0] = j;
				j--;
			}
			return index;
		}
		else if (nums[mid] > target)
		{
			end = mid - 1;
		}
		else if (nums[mid] < target)
		{
			start = mid + 1;
		}
	}
	return index;
}

int main() {
	vector<int> arr = { 1,2,2 };
	vector<int> x = searchRange(arr, 2);
	cout << x[0] << endl << x[1];
}
