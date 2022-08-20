class Solution {
public:
    bool hasAlternatingBits(int n) {
	int rem;
	vector<int> vect;
	int test;
	while (n > 0) {
		rem = n % 2;
		n /= 2;
		vect.push_back(rem);
	}
	test = vect[0];
	for (int i = 1; i < vect.size();i++) {
		if (vect[i] != 1 - vect[i - 1] % 2)
			return false;
	}
	return true;
}
};
