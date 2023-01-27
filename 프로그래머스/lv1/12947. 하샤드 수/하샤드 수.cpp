#include <string>
#include <vector>
using namespace std;

bool solution(int x) 
{
    bool answer = true;
    int n=x, m=0;
    
    while(n!=0)
    {
        m+=(n%10);
        n/=10;
    }
    
    if(x%m!=0)
    {
        answer=false;
    }
    
    return answer;
}