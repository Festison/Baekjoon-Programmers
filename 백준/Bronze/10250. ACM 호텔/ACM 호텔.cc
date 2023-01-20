#include <iostream>
using namespace std;

int main(void)
{
	int T;
	int H, W, N; // 호텔의 층 수, 각 층의 방 수, N번째 손님
	int answer;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;

		if (N % H == 0)
		{
			answer = H * 100+(N / H);
		}
		else
		{
			answer = (N % H) * 100 + (N / H) + 1;
		}
		
		cout << answer << endl;
	}

	return 0;
}