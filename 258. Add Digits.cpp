class Solution {
public:
    int addDigitsonce(int num) {
	
	int res = 0;
	int rem;
	while (num > 0) {
		rem = num % 10;
		res += rem;
		num /= 10;
	}
	return res;
}


int addDigits(int num) {
	while (num > 9) {
		num = addDigitsonce(num);
	}
	return num;
}
};
