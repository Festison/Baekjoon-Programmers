#include <string>
#include <vector>
using namespace std;

string solution(vector<string> str_list, string ex) 
{
    string tail_string = "";

    for (const string& str : str_list) 
    {
        if (str.find(ex) == string::npos)
        {  // ex가 포함되지 않은 문자열만 추가
            tail_string += str;
        }
    }

    return tail_string;
}