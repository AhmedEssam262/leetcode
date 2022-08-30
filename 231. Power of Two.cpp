class Solution {
public:


bool isPowerOfTwo(int n) {
	int rem;
	int my_main = n;
    if (n<=0)
		return false;
	while (n != 1) {
		rem = n % 2;
		if (rem != 0) {
			return false;
		}
		n /= 2;
	}
	return true;

}
};
