#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) 
{
    int answer = 0;
    
    sort(dots.begin(), dots.end());
    
    answer=(dots[3][0]-dots[0][0])*(dots[3][1]-dots[0][1]);
    
    return answer;
}