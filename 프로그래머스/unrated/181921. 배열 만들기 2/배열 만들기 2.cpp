#include <vector>
using namespace std;

vector<int> solution(int l, int r) 
{
    vector<int> result;
    
    for (int num = l; num <= r; num++) 
    {
        int temp = num;
        bool valid = true;
        
        while (temp > 0) 
        {
            int digit = temp % 10;
            
            if (digit != 0 && digit != 5)
            {
                valid = false;
                break;
            }
            
            temp /= 10;
        }
        
        if (valid)
        {
            result.push_back(num);
        }
            
    }
    
    if (result.empty())
    {
        result.push_back(-1);
    }
    
    return result;
}
