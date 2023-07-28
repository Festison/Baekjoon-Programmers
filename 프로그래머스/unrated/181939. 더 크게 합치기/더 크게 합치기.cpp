#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    
    string s_a = to_string(a);
    string s_b = to_string(b);
    
    string a_b=s_a+s_b;
    string b_a=s_b+s_a;
    
    if(a_b>b_a)
    {
        answer=stoi(a_b);
    }
    else
    {
        answer=stoi(b_a);
    }
    
    return answer;
}