class Solution {
public:
   string cut_string(string s) {
	string res = "";
	stack<char> st;
	int count = 0;
	int size = s.size();
	for (int i = size - 1; i >= 0; i--) {
		if (s[i] == '#') {
			count++;
			continue;
		}
		else {
			if (count == 0) {
				st.push(s[i]);
			}
			else {
				count--;
				continue;
			}
		}
	}
	while (!st.empty())
	{
		res += st.top();
		st.pop();
	}
	return res;
}


bool backspaceCompare(string s, string t) {
	string new_s = cut_string(s);
	string new_t = cut_string(t);
	if (!new_s.compare(new_t))
		return true;
	return false;
}
};
