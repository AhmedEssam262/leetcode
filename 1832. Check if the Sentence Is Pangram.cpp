class Solution {
public:
    bool checkIfPangram(string sentence) {
	map<char, int> m;m['a'] = 0;m['b'] = 0;m['c'] = 0;m['d'] = 0;m['e'] = 0;m['f'] = 0;m['g'] = 0;m['h'] = 0;m['i'] = 0;m['j'] = 0;m['k'] = 0;	m['l'] = 0;
	m['m'] = 0;m['n'] = 0;m['o'] = 0;m['p'] = 0;m['q'] = 0;m['r'] = 0;m['s'] = 0;m['t'] = 0;m['u'] = 0;m['v'] = 0;m['w'] = 0;m['x'] = 0;m['y'] = 0;m['z'] = 0;
	for (int i = 0; i < sentence.size(); i++) {
		m[sentence[i]] = 1;
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second == 0)
			return false;
	}
	return true;
}
};
