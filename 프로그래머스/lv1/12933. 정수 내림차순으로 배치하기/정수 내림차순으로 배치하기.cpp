#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    
    string number=to_string(n);          // n을 문자열로 변환 
    sort(number.rbegin(),number.rend()); // 거꾸로 정렬
    answer=stoll(number);                // long long으로 변환
         
    return answer;
}