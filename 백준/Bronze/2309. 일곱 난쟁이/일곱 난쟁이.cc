#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tall[10];
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> tall[i];
		sum += tall[i];
	}

	sort(tall, tall + 9);

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - (tall[i] + tall[j]) == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (i == k || j == k)
					{
						continue;
					}
					cout << tall[k] << "\n";
				}
				return 0;
			}

		}
	}
}