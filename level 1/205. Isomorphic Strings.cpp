class Solution {
public:
    bool isIsomorphic(string s, string t) {
    string target = "";
    string target2 = "";
    map<char, char> m,m2;
    for (int i = 0; i < s.size(); i++) {
        m[s[i]] = t[i];
    }

    for (int i = 0; i < s.size(); i++) {
        m2[t[i]] = s[i];
    }

    for (int j = 0; j < s.size(); j++) {
        target += m[s[j]];
    }
    for (int j = 0; j < s.size(); j++) {
        target2 += m2[t[j]];
    }
    return (!target.compare(t) && !target2.compare(s));



}
};
