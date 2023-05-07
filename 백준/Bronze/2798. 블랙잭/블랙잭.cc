#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;
    int cards[N];
    
    for(int i=0; i<N; i++)
    {
        cin >> cards[i];
    }

    sort(cards, cards+N); // 카드 숫자를 오름차순으로 정렬

    int max_sum = 0;
    for(int i=0; i<N-2; i++)
    { // 첫번째 카드
        for(int j=i+1; j<N-1; j++)
        { // 두번째 카드
            for(int k=j+1; k<N; k++)
            { // 세번째 카드
                int sum = cards[i] + cards[j] + cards[k];
                
                if(sum > M) break; // 합이 M을 넘어가면 다음 카드 확인
                if(sum > max_sum) max_sum = sum; // 최대 합 갱신
            }
        }
    }

    cout << max_sum << endl; // 최대 합 출력
    return 0;
}
