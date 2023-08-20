#include <string>
#include <vector>
using namespace std;

int solution(string myString, string pat) 
{
    int myLen = myString.length();
    int patLen = pat.length();
    int result = 0;

    for (int i = 0; i <= myLen - patLen; i++) 
    {
        string subString = myString.substr(i, patLen);

        for (char &c : subString)
        {
            if (c == 'A') 
            {
                c = 'B';
            } 
            else 
            {
                c = 'A';
            }
        }

        if (subString == pat) 
        {
            result = 1;
            break;
        }
    }

    return result;
}