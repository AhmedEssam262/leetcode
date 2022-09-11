class Solution {
public:
    bool isSubsequence(string s, string t) {

    int count = 0;
    int p2 = -1;

    for (int i = 0; i < s.size(); i++) {
        int j = p2 + 1;
        for (; j < t.size(); j++) {
            if (s[i] == t[j]) {
                count++;
                p2 = j;
                break;
            }
        }
    }
    if(count==s.size())
        return true;
    return false;

}
};
