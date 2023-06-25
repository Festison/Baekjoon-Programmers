#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) 
{
    vector<string> answer;
    istringstream iss(my_string);
    string word;

    while (iss >> word)
    {
        answer.push_back(word);
    }

    return answer;
}