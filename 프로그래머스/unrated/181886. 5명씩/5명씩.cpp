#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> solution(vector<string> names) 
{
    vector<string> result;
    int i = 0;
    
    while (i < names.size())
    {
        result.push_back(names[i]);
        i += 5;
    }
    
    return result;
}