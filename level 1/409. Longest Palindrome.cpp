class Solution {
public:
    int longestPalindrome(string s) {
	map<char, int> m;
	int count = 0;
	bool one = false;
	for (int i = 0; i < s.size(); i++) {
		m[s[i]]++;
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		count += (it->second) / 2;
		if (it->second % 2 != 0) {
			one = true;
		}
	}
	return count * 2 + one;
}
};

