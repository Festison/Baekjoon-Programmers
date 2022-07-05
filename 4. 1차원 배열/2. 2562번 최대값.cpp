#include<iostream>
using namespace std;


int main()
{
	int N[9];
	int max = 0;
	int count = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> N[i];
		if (max<=N[i])
		{
			max = N[i];
			count = i;
		}
	}

	cout << max << endl;
	cout << count + 1 << endl;

	return 0;

}