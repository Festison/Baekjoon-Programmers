#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    int first=0;
    int second=0;
    
    for(int i=0; i<num_list.size(); i++)
    {
        if(num_list[i]%2==0)
        {
            first++;
        }
        
        else
        {
            second++;
        }
        
    }
    
    answer.push_back(first);
    answer.push_back(second);
    
    return answer;
}