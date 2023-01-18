#include <string>
#include <vector>
using namespace std;

int solution(int n) 
{
    int num = 1;
    
    for(int i=1; ;i++) 
    {
        num *= i;
        if(num > n) 
        {
            return i-1;
        }
    }
}