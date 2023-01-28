#include <string>
#include <vector>
using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;
    
    if(a==b)
    {
        answer=a;
    }
    else if(a>b)
    {
        while(a>=b)
        {
            answer+=b;
            b++;
        }
    }
    else if(b>a)
    {
        while(a<=b)
        {
            answer+=a;
            a++;
        }
    }
    
    return answer;
}