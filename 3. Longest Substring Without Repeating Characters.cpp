class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int max = 0;
	vector<int> vect = {};
    if(s==" ")
        return 1;
            
	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			if (count(vect.begin(), vect.end(), s[j]) == 0) {
				vect.push_back(s[j]);
			}
			else {
				if (vect.size() > max)
					max = vect.size();
				vect.clear();
				break;
			}
		if (vect.size() > max)
				max = vect.size();
        }
	}
	return max;
    }
};
