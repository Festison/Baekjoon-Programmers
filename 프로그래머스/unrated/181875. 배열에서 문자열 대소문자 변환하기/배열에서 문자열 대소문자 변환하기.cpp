#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> strArr) 
{
    for (int i = 0; i < strArr.size(); i++) 
    {
        if (i % 2 == 0) 
        {  // 짝수번째 인덱스
            for (int j = 0; j < strArr[i].length(); j++)
            {
                strArr[i][j] = tolower(strArr[i][j]);  // 소문자로 변환
            }
        } 
        else
        {  // 홀수번째 인덱스
            for (int j = 0; j < strArr[i].length(); j++) 
            {
                strArr[i][j] = toupper(strArr[i][j]);  // 대문자로 변환
            }
        }
    }
    
    return strArr;
}
