#include <string>
using namespace std;

string solution(string s) 
{
    int answer = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        
        if(s[i] == ' ')
        {
            answer=0;
            continue; 
        }
       
        if(answer%2)
        {
            s[i] = tolower(s[i]);
        }
        else
        {
            s[i] = toupper(s[i]); 
        }
        answer++;
    }
    
    return s;
}