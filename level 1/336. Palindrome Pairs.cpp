// Source : https://leetcode.com/problems/palindrome-pairs/
// Author : Hao Chen
// Date   : 2017-03-22



class Solution {
public:
    bool isPalindrome(string& str) {
        int left = 0, right = str.size() - 1;
        while( left < right) {
            if (str[left++] != str[right--]) return false;
        }
        return true;
    }
    vector<vector<int>> palindromePairs(vector<string>& words) {
        unordered_map<string, int> dict;
        for(int i=0; i<words.size(); i++){
            string w = words[i];
            reverse(w.begin(), w.end());
            dict[w] = i;
        }
        
        
        vector<vector<int>> result;
        
        //egde case: deal with empty string 
        if ( dict.find("") != dict.end() ) {
            for(int i=0; i<words.size(); i++) {
                if ( isPalindrome(words[i]) && dict[""] != i ) {
                    result.push_back( { dict[""], i } );
                }
            }
        }
        
        for(int i=0; i<words.size(); i++) {
            for (int j=0; j<words[i].size(); j++) {
                //split the word to 2 parts
                string left = words[i].substr(0, j);
                string right = words[i].substr(j, words[i].size() - j);
                
                // if the `left` is found, which means there is a words has reversed sequence with it.
                // then we can check the `right` part is Palindrome or not. 
                if ( dict.find(left) != dict.end() && isPalindrome(right) && dict[left] != i ) {
                    result.push_back( { i, dict[left] } );
                }
                
                if (dict.find(right) != dict.end() && isPalindrome(left) && dict[right] != i ) {
                    result.push_back( { dict[right], i } );
                }
            }

        }
        
        return result;
    }
    
};

/* This solution is valid for 80 testcases
class Solution {
public:
    int findIndex(vector<string> arr) {

	for (auto i = 0; i < arr.size(); ++i) {
		if (arr[i] == "")
			return i;
	}

	return -1;
}

bool isPalindrome(string s) {
	int mid = s.size() / 2;
	int size = s.size();
	for (int i = 0; i < mid; i++) {
		if (s[i] != s[size - 1 - i])
			return false;
	}
	return true;
}

vector<vector<int>> palindromePairs(vector<string>& words) {
	vector<vector<int>> res;
	vector<int> sub;
	vector<int> sub2;
	int index = findIndex(words);
	if (index != -1) {
		for (int q = 0; q < words.size(); q++) {
			if (q == index)
				continue;
            if(isPalindrome(words[q])){
			    res.push_back({ q,index });
			    res.push_back({ index,q });
            }
		}
	}
	for (int i = 0; i < words.size(); i++) {
		for (int j = 0; j < words.size(); j++)
		{
			
			if (i == j)
				continue;
			if (words[i] == "" || words[j] == "")
				continue;
			if (isPalindrome(words[i] + words[j])) {
				sub.push_back(i);
				sub.push_back(j);
			}
			if (sub.size() == 2) {
				res.push_back(sub);
				sub.clear();
			}
		}
		if(!sub.empty())
			res.push_back(sub);
		sub.clear();
		
	}
	return res;
}
};
