class Solution {
public:
    string interpret(string command) {
	string res = "";
	for (int i = 0; i < command.size(); i++) {
		if (command[i] == 'G') {
			res += 'G';
			continue;
		}
		else if (command[i] == '(' && command[i + 1] == ')') {
			res += 'o';
			i++;
			continue;
		}
		else if (command[i] == '(' && command[i + 1] == 'a') {
			res += "al";
			i += 3;
			continue;
		}
	}
	return res;
}
};
