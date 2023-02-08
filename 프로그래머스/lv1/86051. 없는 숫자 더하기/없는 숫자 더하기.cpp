#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers)
{
    int answer = 0;
    
    sort(numbers.begin(),numbers.end());
    
    for(int i=0; i<numbers.size(); i++)
    {
        answer+=numbers[i];
    }
    
    return 45-answer;
}