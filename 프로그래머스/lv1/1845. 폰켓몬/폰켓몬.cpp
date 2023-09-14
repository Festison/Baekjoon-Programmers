#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> s;
    
    for(auto & i : nums) 
    {
        s.insert(i);
    }
    
    answer = min(s.size(), nums.size()/2);
    
    return answer;
}