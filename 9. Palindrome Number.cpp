class Solution {
public:
    int no_of_digits(int x) {
	int d = 0;
	while (x > 0) {
		d++;
		x /= 10;
	}
	return d;
}
bool isPalindrome(int x) {
	if (x < 0)
		 return false;
	if (x > INT_MAX)
        return 0;
	int digits = no_of_digits(x);
	int rem;
	long long temp = 0;
	int result;
    int mine=x;
	while (x > 0) {
		rem = x % 10;
		temp += rem * pow(10, digits - 1);
		if (temp > INT_MAX)
            return 0;
		digits--;
		x /= 10;
	}
	result = temp;
	if (result == mine)
		return true;
	return false;
}
};
