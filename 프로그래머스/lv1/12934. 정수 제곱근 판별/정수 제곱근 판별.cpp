#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    
    long long x=sqrt(n);
    
    if(n==x*x)
    {
        answer=(x+1)*(x+1);
    }
    else
    {
        answer=-1;
    }
        
    return answer;
        
}