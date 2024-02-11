using System;

public class Solution 
{
    public int[] solution(int brown, int yellow) 
    {
        int[] answer = new int[2];
           
        // yellow를 이용하여 카펫의 가로와 세로 길이를 구함
            for (int i = 1; i <= yellow; i++)
            {
                if (yellow % i == 0)
                {
                    int width = yellow / i;
                    int height = i;

                    // yellow를 감싸는 brown의 수는 (가로 + 2) * 2 + (세로 * 2) 입니다.
                    if ((width + 2) * 2 + (height * 2) == brown)
                    {
                        // 카펫의 가로와 세로 길이에 각각 2를 더한 값을 반환합니다.
                        answer[0] = width + 2;
                        answer[1] = height + 2;
                        break;
                    }
                }
            }

            return answer;
        
        return answer;
    }
}