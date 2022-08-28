#include<string>
#include<vector>
#include<algorithm>
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
	vector<int> v;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			if (c == 0)
				continue;
			v.push_back(c);
			c = 0;
		}
		else
			c++;
			if(i==s.size()-1&&c!=0)
				v.push_back(c);
	}
	int result = v[v.size()-1];
        return result;
    }
};
