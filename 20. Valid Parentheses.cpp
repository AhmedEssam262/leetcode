class Solution {
public:
    bool in(char a) {
	if (a == '(' || a == '{' || a == '[') {
		return true;
	}
	else
	{
		return false;
	}
}

bool matching(char a, char b) {
	if (a == '(' && b == ')') {
		return true;
	}
	if (a == '[' && b == ']') {
		return true;
	}
	if (a == '{' && b == '}') {
		return true;
	}
	return false;
}


bool out(char a) {
	if (a == ')' || a == '}' || a == ']') {
		return true;
	}
	else
	{
		return false;
	}
}

bool isValid(string s) {
	stack<char> myStack;
	int size = s.size();
	for (int i = 0; i < size; i++) {
        if (out(s[i]) && myStack.empty()) {
			return false;
		}
		if (in(s[i])) {
			myStack.push(s[i]);
		}
        if (out(s[i]) && !matching(myStack.top(), s[i])) {
			return false;
		}
		if (out(s[i]) && matching(myStack.top(), s[i]) && !myStack.empty()) {
			myStack.pop();
		}
        
	}
	if (myStack.empty()) {
		return true;
	}
	else
	{
		return false;
	}
}
};
