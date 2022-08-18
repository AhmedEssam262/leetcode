class Solution {
public:
    int strStr(string haystack, string needle) {
        int ss1 = size(haystack);
	int ss2 = size(needle);
	int found = 0;
	int index = -1;
	for (int i = 0; i < (ss1 - ss2+1); i++) {
		
		for (int j = 0; j <  ss2; j++) {
			if (haystack[i+j] == needle[j]) {
				index = i;
				found++;
			}
			else {
				index = -1;
				found = 0;
				break;
			}
		}
		if (found == ss2)
			return index;
	}
	return index;
        
    }
};
