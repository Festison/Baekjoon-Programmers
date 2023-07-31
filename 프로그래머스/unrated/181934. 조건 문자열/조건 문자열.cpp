#include <iostream>
using namespace std;

int solution(string ineq, string eq, int n, int m) 
{
    if (ineq == "<" && eq == "=") 
    {
        return n <= m ? 1 : 0;
    } 
    else if (ineq == ">" && eq == "=") 
    {
        return n >= m ? 1 : 0;
    } 
    else if (ineq == "<" && eq == "!") 
    {
        return n < m ? 1 : 0;
    } 
    else if (ineq == ">" && eq == "!") 
    {
        return n > m ? 1 : 0;
    }
    
    // 위의 경우에 해당하지 않는 경우 0을 반환
    return 0;
}