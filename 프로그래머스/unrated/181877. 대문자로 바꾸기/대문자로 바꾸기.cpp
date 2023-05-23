#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string myString) 
{
    for(int i=0; i<myString.size(); i++)
    {
        myString[i]=toupper(myString[i]);
    }
    
    return myString;
}