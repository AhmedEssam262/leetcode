class Solution {
public:
   int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int curSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(sum-nums[i]==curSum*2) return i;
            curSum+=nums[i];
        }
        return -1;
    }
};


/* O(n^2)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int leftSum = 0;
    int rightSum = 0;
    int start = 0;
    for (; start < nums.size(); start++) {
        for (int i = 0; i < start; i++) {
            leftSum += nums[i];
        }

        for (int j = start + 1; j < nums.size(); j++) {
            rightSum += nums[j];
        }

        if (leftSum == rightSum) {
            return start;
        }
        leftSum = 0;
        rightSum = 0;
    }
    return -1;
}
};
*/
