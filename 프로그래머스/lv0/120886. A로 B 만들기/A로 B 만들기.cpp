#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string before, string after) 
{
    int answer = 0;
    
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    
    if(before==after)
    {
        answer=1;
    }
    
    else if(before!=after)
    {
        answer=0;
    }
    
    return answer;
}