#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cin >> n;

	cout << (n * (n + 1)) / 2 << endl;

	for (int i = 0; i <= n; i++)
	{
		sum = sum + i;
	}
	cout << sum;
	return 0;
}