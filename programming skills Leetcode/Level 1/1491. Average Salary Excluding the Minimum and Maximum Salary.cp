public class Solution {
   public  double Average(int[] salary)
        {
            int min = salary[0];
            int max = salary[0];

            for (int i = 0; i < salary.Length; i++)
            {
                if (salary[i] < min)
                    min = salary[i];
                if (salary[i] > max)
                    max = salary[i];
            }
            double count = 0;
            double sum = 0;
            for (int i = 0; i < salary.Length; i++)
            {
                if (salary[i] == min || salary[i] == max)
                    continue;
                count++;
                sum += salary[i];
            }
            return sum/count;
        }
}
