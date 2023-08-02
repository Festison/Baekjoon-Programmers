#include <string>
#include <vector>
using namespace std;

int solution(int a, int d, vector<bool> included) 
{
    int n = included.size();
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (included[i])
        {
            sum += a + (i * d);
        }
    }
    
    return sum;
}