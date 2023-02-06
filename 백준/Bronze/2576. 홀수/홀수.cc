#include <iostream>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int odd;
	int sum = 0;
	int min = 100;

	for (int i = 0; i <7; i++)
	{
		cin >> odd;

		if (odd%2==1)
		{
			sum += odd;

			if (odd<min)
			{
				min = odd;
			}
		}
	}

	if (sum==0)
	{
		cout << -1<<"\n";
	}
	else
	{
		cout << sum << "\n" << min;
	}

	return 0;
}