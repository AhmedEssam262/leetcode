class Solution {
public:
    int find_index(vector<char> ss,char x) {
	int found = -1;
	for (int k = 0; k < size(ss); k++) {
		if (ss[k] == x) {
			found = k;
			break;
		}
	}
	return found;
    }
    
    int romanToInt(string s) {
        int total = 0;
        vector<char> sympole = { 'I','V','X','L','C','D','M' };
        vector<int> value = { 1,5,10,50,100,500,1000 };
        if (size(s) == 0)
            return 0;
        else if(size(s)==1)
            return (value[find_index(sympole, s[0])]); 
        else {
            total += value[find_index(sympole, s[0])];
            for (int i = 1; i < size(s); i++) {
                if (find_index(sympole, s[i]) <= find_index(sympole, s[i-1]))
                    total += value[find_index(sympole, s[i])];
                else {
                    total += value[find_index(sympole, s[i])];
                    total -= 2 * value[find_index(sympole, s[i - 1])];
                }
            }
        }
        return total;
        }
};
