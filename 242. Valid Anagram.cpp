class Solution {
public:
    bool isAnagram(string s, string t) {

	if (s.size() != t.size())
		return false;

	multiset<char> sv;
	multiset<char> tv;

	for (int i = 0; i < s.size(); i++) {
		sv.insert(s[i]);
	}

	for (int i = 0; i < t.size(); i++) {
		tv.insert(t[i]);
	}

	auto it1 = sv.begin();
	auto it2 = tv.begin();
	for (; !sv.empty();) {
		if (*it1 != *it2) {
			return false;
		}
		sv.erase(it1++);
		tv.erase(it2++);
	}
	return true;
}
};
