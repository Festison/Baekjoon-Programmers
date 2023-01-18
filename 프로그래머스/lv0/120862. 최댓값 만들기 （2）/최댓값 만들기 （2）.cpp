#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers)
{
    int answer,a,b = 0;
    
    sort(numbers.begin(),numbers.end());
    a=numbers[numbers.size()-1]*numbers[numbers.size()-2];
    b=numbers[0]*numbers[1];
    
    answer=max(a,b);
    
    return answer;
}