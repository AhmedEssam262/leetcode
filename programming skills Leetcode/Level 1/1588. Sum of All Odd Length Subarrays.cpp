class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
	int size = arr.size();
	int sum = 0;
	for (int i = 0; i < size; i++) {
		int j = 0;
		while (i + j < size) {
			sum += accumulate(arr.begin() + i, arr.begin() + 1 + i + j, 0);
			j = j + 2;
		}
	}
	return sum;
}
};
