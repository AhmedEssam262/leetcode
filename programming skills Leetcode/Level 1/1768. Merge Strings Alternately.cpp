class Solution {
public:
    string mergeAlternately(string word1, string word2) {
	string res = "";
	int size1 = word1.size();
	int size2 = word2.size();
	if (size1 == size2) {
		for (int i = 0; i < size1; i++) {
			res += word1[i];
			res += word2[i];
		}
	}
	else if (size1 > size2) {
		for (int i = 0; i < size2; i++) {
			res += word1[i];
			res += word2[i];
		}
		for (int i = size2; i < size1; i++) {
			res += word1[i];
		}
	}
	else if (size1 < size2) {
		for (int i = 0; i < size1; i++) {
			res += word1[i];
			res += word2[i];
		}
		for (int i = size1; i < size2; i++) {
			res += word2[i];
		}
	}
	return res;
}

};
