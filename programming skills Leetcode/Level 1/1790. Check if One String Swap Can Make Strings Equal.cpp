class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
	if (s1 == s2) {
		return true;
	}
	int dif = 0;
	vector<char> temp1;
	vector<char> temp2;
	for (int i = 0; i < s1.size(); i++) {
		if (dif > 2)
			return false;
		if (s1[i] == s2[i])
			continue;
		else {
			temp1.push_back(s1[i]);
			temp2.push_back(s2[i]);
			dif++;
            if (dif > 2)
			    return false;
		}
	}
    if (temp1.size() == 1) {
		return false;
	}
	if (temp1[0] == temp2[1] && temp1[1] == temp2[0]) {
		return true;
	}
	return false;
}

};
