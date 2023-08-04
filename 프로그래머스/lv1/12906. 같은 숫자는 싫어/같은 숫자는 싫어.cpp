#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{  
    // 벡터의 중복된 원소를 제거하는 기능 #include <algorithm> 필요
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    
    vector<int> answer=arr;

    return answer;
}