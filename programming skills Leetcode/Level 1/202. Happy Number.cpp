class Solution {
public:
bool flag=false;
bool isHappy(int n) {
	vector<int> x;
	x.push_back(n);
	int temp = n;
	int new_no = 0;
	if (temp == 1) {
		return true;
	}
	while (true) {

		while (temp) {
			new_no += pow((temp % 10), 2);
			temp /= 10;
		}
		if (new_no == 1) {
			return true;
		}
		else if (count(x.begin(), x.end(), new_no)) {
			return false;
		}
		x.push_back(new_no);
		temp = new_no;
		new_no = 0;

	}
	return true;
}
};
