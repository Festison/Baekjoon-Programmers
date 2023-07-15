#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, int n)
{
    int len = arr.size();
    
    // arr의 길이가 홀수인 경우
    if (len % 2 == 1)
    {
        for (int i = 0; i < len; i += 2) 
        {           
            arr[i] += n;
        }
    }
    // arr의 길이가 짝수인 경우
    else 
    {
        for (int i = 1; i < len; i += 2)
        {
            arr[i] += n;
        }
    }
    
    return arr;
}