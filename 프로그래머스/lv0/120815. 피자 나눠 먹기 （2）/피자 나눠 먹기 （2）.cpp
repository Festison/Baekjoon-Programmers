#include <string>
#include <vector>
using namespace std;

int solution(int n) 
{
    int answer = 0;
    int pizza=6;
    
    while(pizza%n!=0)
    {
        pizza+=6;
    }
    
    answer=pizza/6;
    
    return answer;
}