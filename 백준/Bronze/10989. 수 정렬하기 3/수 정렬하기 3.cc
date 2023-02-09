#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	int number[10001] = { 0 };

	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		number[n] += 1;

	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < number[i]; j++)
		{
			cout << i << "\n";
		}
	}

	return 0;
}