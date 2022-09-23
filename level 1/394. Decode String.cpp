class Solution {
public:
    string decodeString(string s) {
        int number(0);
        string num;
        string str;
        string res;
        int sLen = s.size();
        int i(0),j;
        while(i<sLen)
        {
            if(isdigit(s[i]))
            {
                num = "";
                while(isdigit(s[i])) num+=s[i++];
                number = atoi(num.c_str()); 
                str = "";
                int c(1);
                for(j = i + 1 ; j < sLen ;++j)
                {
                    if(s[j] == '[') ++c;
                    else if(s[j] == ']') --c;
                    if (c!=0) str+=s[j];
                    else{
                        str = decodeString(str);
                        i = j+1;
                        while(number>0)
                        {
                            res+=str;
                            number--;
                        }
                        break;
                    }
                }
            }
            else res+=s[i++];
        }
        return res;
    }
};


/* Solution passed for 19/36 test cases
#include<iostream>
#include<string>
#include<stack>
using namespace std;
string repeat(string s, int n) {
	string r;

	for (int i = 0; i < n; i++)
		r += s;

	return r;
}
stack<char> st;
string result = "";
int rep = 1;
string temp = "";
bool check = false;
string decodeString(string s) {

	string res = "";
	if (st.empty() || find(temp.begin(), temp.end(), ']') != temp.end()) {
		for (int i = 0; i < s.size(); i++) {
			st.push(s[i]);
		}
	}
	else {
		result = repeat(temp, rep) + result;
		temp = "";
		rep = 1;
	}
	while (!st.empty()) {
		if (int(st.top()) >= 97 && int(st.top()) <= 122) {
			res = st.top() + res;

			st.pop();
		}
		else {
			break;
		}
	}
	if (res != "") {
		res = repeat(res, rep);
		result = res + result;
	}
	if (st.empty())
		return result;
	 if(st.top()!=']') {
		st.pop();
	}
	else {
		 temp = "";
		st.pop();
		while (!st.empty() && st.top() != '[' )
		{
			temp = st.top() + temp;
			st.pop();
		}
		if (find(temp.begin(), temp.end(), ']') != temp.end()) {
			temp ='[' + temp;
			st.pop();
			temp = st.top()+temp;
			rep = (int(st.top()) - 48);
			st.pop();
			st.push('-');
			decodeString(temp);
		}
		else{
			st.pop();
			rep = (int(st.top()) - 48);
			st.pop();
			int rep2;
			if (!st.empty()) {
				if (st.top() == '0' || st.top() == '1' || st.top() == '2' || st.top() == '3' || st.top() == '4' || st.top() == '5' || st.top() == '6' || st.top() == '7' || st.top() == '8' || st.top() == '9') {
					rep2 = (int(st.top()) - 48);
					st.pop();
					rep = rep2 * 10 + rep;
				}
			}
			if (!st.empty()) {
				if (st.top() == '0' || st.top() == '1' || st.top() == '2' || st.top() == '3' || st.top() == '4' || st.top() == '5' || st.top() == '6' || st.top() == '7' || st.top() == '8' || st.top() == '9') {
					
					int rep3 = (int(st.top()) - 48);
					rep = rep2 + rep3 * 100;
					st.pop();
				}
			}
			if (!st.empty()) {
				if (st.top() == '-') {
					st.pop();
					string put = repeat(temp, rep);
					for (int j = 0; j < put.size(); j++) {
						st.push(put[j]);
					}
					st.push(']');
					temp = "";
				}
			}
				decodeString(temp);
		}

	}
	return result;
}

int main() {
	string s = "abc3[cd]xyz";
	string z = "100[a]";
	cout << decodeString(s);
}

/*
