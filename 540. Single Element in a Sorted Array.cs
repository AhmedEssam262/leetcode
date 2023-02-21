public class Solution {
    public  bool found =false;
        public  int result = 0;
        public int temp(int[] nums, int start, int end)
        {
            if(start==end){
                result = nums[start];
                return nums[start];
            }

            if (nums[start] != nums[start + 1])
            {
                result = nums[start];
                return nums[start];
            }
            if (nums[end] != nums[end - 1])
            {
                result = nums[end];
                return nums[end];
            }
            if (found)
                return result;

            int mid = (end - start) / 2;
            if (nums[mid] == nums[mid + 1])
            {
                if ((end - mid) % 2 == 0)
                {
                    start = mid;
                    temp(nums, start, end);
                }
                else
                {
                    end = mid-1;
                    temp(nums, start, end);
                }

            }
            else if (nums[mid] == nums[mid - 1])
            {
                if ((mid - start) % 2 == 0)
                {
                    end = mid;
                    temp(nums, start, end);
                }
                else
                {
                    start = mid + 1;
                    temp(nums, start, end);
                }
            }
            else
            {
                found = true;
                result= nums[mid];
            }
            return result;
        }
        public  int  SingleNonDuplicate(int[] nums)
        {
            int ans= temp(nums, 0, nums.Length-1);
            return ans;
        }
}
