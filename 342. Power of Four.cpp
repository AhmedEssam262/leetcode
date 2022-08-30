class Solution {
public:
    bool isPowerOfFour(int n) {
        	int rem;
        int my_main = n;
        if (n<=0)
            return false;
        while (n != 1) {
            rem = n % 4;
            if (rem != 0) {
                return false;
            }
            n /= 4;
        }
        return true;
    }
};
