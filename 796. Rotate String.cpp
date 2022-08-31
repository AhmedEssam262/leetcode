class Solution {
public:
    string rotate_only_one(string s) {
	int size = s.size();
	string temp;
	temp.push_back(s[size - 1]);
	for (int i = 0; i < size - 1; i++) {
		temp.push_back(s[i]);
	}
	s = temp;
	temp.clear();
	return s;
}
bool rotateString(string s, string goal) {
	for (int i = 0; i < s.size(); i++) {
		if (goal == rotate_only_one(s)) {
			return true;
		}
		s = rotate_only_one(s);
	}
	return false;
}
};
