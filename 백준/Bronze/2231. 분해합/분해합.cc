#include <iostream>
using namespace std;

int main(void)
{
	int N;
	int result = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int M = 0;
		int num = i;

		while (num != 0)
		{
			M += num % 10;
			num /= 10;
		}

		if (M + i == N)
		{
			result = i;
			break;
		}
	}

	cout << result;

	return 0;
}