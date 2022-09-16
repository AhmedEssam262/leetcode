// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    int res=-1;
        
        if(isBadVersion(n) && n==1)
            return n;
	while (isBadVersion(n)) {
		n /= 2;
	}
	long long start = n;
	long long end = n * 2 + 1;
        long long mid;
    while(end >= start){
        mid = (end + start) / 2;
        if(!isBadVersion(mid) && isBadVersion(mid+1))
            return mid+1;
        if(isBadVersion(mid) && isBadVersion(mid+1))
            end=mid;
        else
            start=mid;
    }

	return res;
}
};
