#include <string>
#include <vector>
using namespace std;

int solution(int order) 
{
    int answer = 0;
    string a=to_string(order);
    
    for(int i=0; i<a.size(); i++)
    {
        char tempChar = a[i];
        if(tempChar=='3'||tempChar=='6'||tempChar=='9')
        {
            answer++;
        }
    }
    
    return answer;
}