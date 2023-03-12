class Solution {
public:
    bool check(string s1, string s2,string order) {
	int per = 0;
	map<char, int> m;
	m['0'] = -1;
	for (int k = 0; k < order.size(); k++) {
		m[order[k]] = per;
		per++;
	}
	if (s1.size() > s2.size()) {
		for (int q = 0; q < (s1.size() - s2.size()); q++) {
			s2 += '0';
		}
	}
	else if (s1.size() < s2.size()) {
		for (int q = 0; q < (s2.size() - s1.size()); q++) {
			s1 += '0';
		}
	}
	for (int i = 0; i < s1.size(); i++) {
		if (m[s1[i]] > m[s2[i]]) {
			return false;
		}
		else if (m[s1[i]] < m[s2[i]]) {
			return true;
		}
	}
	return true;
}
bool isAlienSorted(vector<string>& words, string order) {
	for (int i = 0; i < words.size() - 1; i++) {
		if (!check(words[i], words[i + 1], order)) {
			return false;
		}
	}
	return true;
}
};
