using System;

public class Solution 
{
    public int solution(int[] array) 
    {
        int answer = 0;
        int maxArr = 0;
        
        // array 최대값 구하기
        for(int i = 0; i < array.Length; i++)
        {
            if(array[i] > maxArr)
            {
                maxArr = array[i];
            }
        }       
        
        int[] count = new int[maxArr + 1];
        int max = 0;
        int num = 0;
        
        // array의 들어있는 값을 count 배열 번호에 넣고 개수가 있는 만큼 추가
        for(int i = 0; i < array.Length; i++)
        {
            count[array[i]]++;
        }
        
        // count 배열중 가장 많이 나온 숫자 찾기
        for(int i = 0; i < count.Length; i++)
        {
            if(count[i] > max)
            {
                max = count[i];
                answer = i;
            }
        }
        // count 배열중 가장 많이 나온 개수랑 같은 개수가 있는지 찾기
        for(int i = 0; i < count.Length; i++)
        {
            if(count[i] == max)
            {
                num++;
            }
        }
        // 개수가 같은 값이 1개 이상인 경우 찾기
        if(num > 1)
        {
            answer = -1;
        }
        
        return answer;
    }
}