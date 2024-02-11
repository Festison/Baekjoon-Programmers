using System;

class Solution 
{
    public int solution(int n) 
   {
        int answer = Convert(n);

        while (true)
        {
            n++;
            if (Convert(n)==answer)
                return n;
        }
    }
    
    public int Convert(int num)
    {
        int count = 0;

        while (num > 0)
        {
            if (num % 2 == 1)
                count++;
                
            num /= 2;
        }

        return count;
    }
}