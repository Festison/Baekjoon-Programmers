# 개념
- C++ 은 Split 함수를 만들어야 한다.

# 코드
```
#include <bits/stdc++.h>
using namespace std;

// 문자열을 구분자(delimiter) 기준으로 잘라서 vector<string>으로 반환
vector<string> Split(string& input, string delimiter)
{
    auto start = 0;                           // 잘라낼 문자열의 시작 위치
    auto end = input.find(delimiter);         // 첫 번째 구분자의 위치 찾기

    vector<string> result;                    // 잘라낸 문자열을 저장할 벡터

    // 구분자가 발견될 때까지 반복
    while (end != string::npos)
    {
        // [start, end) 구간의 문자열을 잘라서 벡터에 추가
        result.push_back(input.substr(start, end - start));

        // start 위치를 구분자 뒤로 이동
        start = end + delimiter.size();

        // 다음 구분자의 위치 탐색
        end = input.find(delimiter, start);
    }

    // 마지막 구분자 이후의 문자열도 벡터에 추가
    result.push_back(input.substr(start));
    
    return result;  // 모든 결과를 반환
}

int main()
{
    string str = "Apple, Banana, Kiwi, Mango, Orange";

    // ", " (쉼표 + 공백)을 기준으로 문자열 분리
    vector<string> fruits = Split(str, ", ");

    // 결과 출력
    for (auto& fruit : fruits)
    {
        cout << fruit << "\n";
    }
}

```
