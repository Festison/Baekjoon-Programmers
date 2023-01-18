#include <string>
#include <vector>
using namespace std;

int solution(int i, int j, int k) 
{
    int answer = 0;

    for(int l = i; l <= j; l++)
    {
        int temp = l;
        
        while(temp > 0)
        {
            if(temp % 10 == k)
            {
                answer++;
            }
            
            temp /= 10;
        }
    }
    
    return answer;
}