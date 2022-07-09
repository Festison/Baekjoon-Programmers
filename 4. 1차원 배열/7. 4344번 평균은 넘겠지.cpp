#include<iostream>
using namespace std;

int main()
{
	int C, N, Avg, AvgN;
	int score[1000] = { 0 };
	double result;

	cin >> C;

	for (int i = 0; i < C; i++)
	{
		Avg = 0;
		AvgN = 0;
		cin >> N;

		for (int j = 0; j < N; j++)
		{
			cin >> score[j];
			Avg = Avg + score[j];
		}

		Avg = Avg / N;

		for (int j = 0; j < N; j++)
		{
			if (score[j] > Avg)
			{
				AvgN++;
			}
		}

		result = (double)AvgN / N * 100;

		cout << fixed;
		cout.precision(3);
		cout << result << "%" << endl;
	}

	return 0;

}