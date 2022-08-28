class Solution {
    
public:
   double myPow(double x, int n) {
	double result = 1;
	if (n == 0)
		return 1;
    if (x == 1)
		return 1;
    if (x == -1){
        int temp=int(n);
        if(temp%2==0)
		    return 1;
        else
            return -1;
    }
	else if (n > 0) {
		for (double i = 0; i < n; i++) {
			result *= x;
		}
	}
	else if (n < 0) {
        if(n<-10000)
            return 0;
		n *= -1;
		for (double i = 0; i < n; i++) {
			result /= x;
		}
	}
	return result;
}
};
