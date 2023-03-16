class Solution {
public:
    bool token(string c) {
	if (c == "+" || c == "-" || c == "*" || c == "/") {
		return true;
	}
	return false;
}
int token_type(string c) {
	if (c == "+" ){
		return 1;
	}
	else if(c == "-")
	{
		return 2;
	}
	else if (c == "*")
	{
		return 3;
	}
	else if (c == "/")
	{
		return 4;
	}
	return 0;
}


int evalRPN(vector<string> tokens) {
	stack<string> val;
	for (int i = 0; i < tokens.size(); i++) {
		if (!token( tokens[i] ) ) {
			val.push(tokens[i]);
		}
		else {
			
			if (val.size() < 2)
				break;
			else {
				
				int temp1 = stoi(val.top());
				val.pop();
				int temp2 = stoi(val.top());
				val.pop();
				int operation = token_type(tokens[i]);
				if (operation == 1) {
					int res = temp1 + temp2;
					val.push(to_string(res));
				}else if (operation == 2) {
					int res = temp2 - temp1;
					val.push(to_string(res));
				}
				else if (operation == 3) {
					int res = temp1 * temp2;
					val.push(to_string(res));

				}
				else if (operation == 4) {
					int res = temp2 / temp1;
					val.push(to_string(res));
				}

			}
		}
	}
	return stoi(val.top());
}
};
