#include<iostream>
#include<string>
using namespace std;

int main()
{
	int testcase;
	string OX;
	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		cin >> OX;
		int	count = 0;
		int sum = 0;
		for (int j = 0; j < OX.length(); j++)
		{
			if (OX[j] == 'O')
			{
				count++;
			}
			else
			{
				count = 0;
			}
			sum += count;
		}
		cout << sum << endl;
	}

	return 0;

}