class Solution {
public:
    string countAndSay(int n) {
	if (n == 1)
		return "1";
	if (n == 2)
		return "11";
	string s = "1";
	int count = 0;
	string temp = "";
	while(n > 1) {
		for (int i = 0; i < s.size(); i++) {
			count++;
			if (i + 1 < s.size()) {
				while (s[i + 1] == s[i]) {
					count++;
					i++;
				}
			}
			ostringstream str1;
			str1 << count;
			string c = str1.str();
			temp+=c;
			temp += s[i];
			count = 0;
			//cout << temp<<endl;
		}
		//cout << temp << endl;
		s = temp;
		count = 0;
		temp = "";



		n--;
	}
	return s;
}
};
