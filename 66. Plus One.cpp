class Solution {
public:
    bool check(vector<int>& digits) {
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] != 9)
                return false;
        }
        return true;
    }
    
    
    vector<int> plusOne(vector<int>& digits) {
	int size = digits.size();
	if (check(digits)) {
		for (int k = 0; k < digits.size(); k++) {
			digits[k] = 0;
		}
		digits.push_back(1);
		reverse(digits.begin(), digits.end());
		return digits;
	}
	for (int i = size - 1; i >= 0; i--) {
		if (digits[i] < 9) {
			digits[i]++;
			return digits;
		}
		else {
			digits[i] = 0;
		}
		
	}
	return digits;
}
};
