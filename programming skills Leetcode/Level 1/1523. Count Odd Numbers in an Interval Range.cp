public class Solution {
     public bool isodd(int x)
        {
            if(x % 2 == 1)
                return true;
            return false;

        }

        public  int CountOdds(int low, int high)
        {
            if(low==high){
                if (isodd(low))
                    return 1;
                else 
                    return 0;
            }    
            
            if (isodd(low) && isodd(high)){
                return (high - low)/2 + 1;
            }
            else if (isodd(low) && !isodd(high))
            {
                return (high - low)/2 + 1;
            }
            else if (!isodd(low) && isodd(high))
            {
                return (high - low) / 2 + 1;
            }
            return (high - low) / 2;
        }
}
