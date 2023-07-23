#include <string>
using namespace std;

int solution(string str1, string str2) 
{
    int str1Len = str1.length();
    int str2Len = str2.length();

    // str1이 str2의 부분 문자열인지 확인
    for (int i = 0; i <= str2Len - str1Len; ++i)
    {
        bool found = true;
        for (int j = 0; j < str1Len; ++j) 
        {
            if (str1[j] != str2[i + j])
            {
                found = false;
                break;
            }
        }
        if (found) return 1;
    }

    return 0;
}