# 개념
- C++ 은 Split 함수를 만들어야 한다.

# 코드
```
#include <bits/stdc++.h>
using namespace std;

// 문자열을 특정 구분자(delimiter)로 잘라서 vector<string>으로 반환하는 함수
vector<string> Split(string& input, string delimiter)
{
    auto start = 0;                          // 잘라낼 문자열의 시작 인덱스
    auto end = input.find(delimiter);        // 구분자가 처음 나타나는 위치

    vector<string> result;                   // 잘린 문자열들을 담을 벡터

    // 구분자가 발견될 때까지 반복
    while (end != string::npos)
    {
        // start ~ end-1 까지의 문자열을 잘라서 결과에 추가
        result.push_back(input.substr(start, end - start));

        // 다음 구간의 시작 인덱스를 갱신
        start = end + delimiter.size();

        // 다음 구분자 위치 탐색
        end = input.find(delimiter, start);
    }

    // 마지막 구분자 이후의 남은 문자열도 추가
    result.push_back(input.substr(start));

    return result;  // 잘린 문자열 벡터 반환
}

int main()
{
    string str = "Apple, Banana, Kiwi, Mango, Orange";

    // ", " (쉼표 + 공백)을 기준으로 문자열 분리
    vector<string> fruits = Split(str, ", ");

    // 확인용 출력
    for (auto& fruit : fruits)
    {
        cout << fruit << "\n";
    }
}
```
