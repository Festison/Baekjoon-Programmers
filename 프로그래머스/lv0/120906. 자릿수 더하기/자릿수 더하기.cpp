#include <string>
#include <vector>
using namespace std;

int solution(int n) 
{
    int answer = 0;
    
    for(int i=0; i<7; i++)
    {
        answer = answer + n%10;
        n = n/10;
    }
    
    return answer;
}