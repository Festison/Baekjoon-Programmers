#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string myString, string pat) 
{
    transform(myString.begin(),myString.end(),myString.begin(),::toupper);
    transform(pat.begin(),pat.end(),pat.begin(),::toupper);

    return myString.find(pat) != string::npos;
}