#include<iostream>
using namespace std;

int main()
{
	int test;
	double score[1000] = { 0 };
	double max = 0;
	double result = 0;

	cin >> test;

	for (int i = 0; i < test; i++)
	{
		cin >> score[i];
		result += score[i];
		if (score[i] > max)
		{
			max = score[i];
		}
	}

	result = (result / max * 100) / test;

	cout << fixed;
	cout.precision(6);
	cout << result;

	return 0;

}