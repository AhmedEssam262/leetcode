class Solution {
public:
   bool canMakeArithmeticProgression(vector<int>& arr) {
	int s = arr.size();
	sort(arr.begin(), arr.end());
	int step = arr[1] - arr[0];
	for (int i = 0; i < s-1; i++) {
		if (arr[i+1] - arr[i] != step)
			return false;
	}
	return true;

}
};
