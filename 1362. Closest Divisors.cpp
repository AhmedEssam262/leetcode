class Solution {
public:
vector<int> f_s(int num) {
	vector<int> result;
	int f=1	, s=0;
	int end = sqrt(num);
	for (int i = end; i >1; i--) {
		if (num % i == 0) {
			f = i;
			break;
		}
	}
	s = num / f;
	result.push_back(f);
	result.push_back(s);
	return result;
}

vector<int> closestDivisors(int num) {
	int f_num = num + 1;
	int s_num = num + 2;
	vector<int> vect1 = f_s(f_num);
	vector<int> vect2 = f_s(s_num);
	
	int dif1 = vect1[1] - vect1[0];
	int dif2 = vect2[1] - vect2[0];
	if (dif1 > dif2)
		return vect2;
	return vect1;
}

};
