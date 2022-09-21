class Solution {
public:
  bool check(string s, string p) {
	map<char, int> s_map;
	map<char, int> p_map;
	for (int i = 0; i < s.size(); i++) {
		s_map[s[i]]++;
	}
	for (int i = 0; i < s.size(); i++) {
		p_map[p[i]]++;
	}
	if (s_map.size() != p_map.size()) {
		return false;
	}
	if (s_map.size() == p_map.size()) {
		auto it1 = s_map.begin();
		auto it2 = p_map.begin();

		for (; it1 != s_map.end();) {
			if (it1->first != it2->first || it1->second != it2->second) {
				return false;
			}
			it1++;
			it2++;
		}
	}
	return true;
	
}

vector<int> findAnagrams(string s, string p) {
	int s_size = s.size();
	int p_size = p.size();
	vector<int> res;
	if (s_size == p_size) {
		sort(s.begin(), s.end());
		sort(p.begin(), p.end());
		if (!s.compare(p)) {
			return { 0 };
		}
	}
	else if (s_size > p_size) {
		sort(p.begin(), p.end());
		for (int i = 0; i < s_size - p_size + 1; i++) {
			string sub_s = s.substr(i, p_size);
			
			if (check(sub_s, p)) {
				res.push_back(i);
			}
		}
	}
	else {
		return {  };
	}
	return res;

}

};
