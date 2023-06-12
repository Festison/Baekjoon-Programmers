#include <string>
#include <vector>
#include<stdlib.h>
using namespace std;

int solution(int a, int b) 
{
    if(a%2 == 1 && b % 2 == 1) 
    {
        return (a*a + b*b);
    }
    if(a%2 == 0 && b % 2 == 0) 
    {
        return abs(a-b);
    }
    
    return 2*(a+b);
}