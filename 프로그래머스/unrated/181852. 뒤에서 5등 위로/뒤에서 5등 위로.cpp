#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list) 
{
    sort(num_list.begin(), num_list.end());  // 리스트를 오름차순으로 정렬

    vector<int> answer;
    
    int size = num_list.size();

    for (int i = 5; i < size; i++)
    {
        answer.push_back(num_list[i]);  // 가장 작은 5개의 수를 제외한 수들을 결과 리스트에 추가
    }

    return answer;
}