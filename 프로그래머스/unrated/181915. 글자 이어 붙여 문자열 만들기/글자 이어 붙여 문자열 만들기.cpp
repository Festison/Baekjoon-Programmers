#include <string>
#include <vector>
using namespace std;

string solution(string my_string, vector<int> index_list) 
{
    string result = "";
    
    for (int i = 0; i < index_list.size(); i++) 
    {
        result += my_string[index_list[i]];
    }
    
    return result;
}